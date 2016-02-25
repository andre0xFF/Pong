/*
 //SITES DE AJUDA:
 * http://msdn2.microsoft.com/en-us/library/7x2hy4cx( VS.80 ).aspx
 * http://msdn2.microsoft.com/en-us/library/58w7c94c( VS.80 ).aspx
 * http://www.warpspeed.com.au/cgi-bin/inf2html.cmd?..%5Chtml%5Cbook%5CToolkt40%5CXPG4REF.INF+172
 * http://faq.cprogramming.com/cgi-bin/smartfaq.cgi?answer=1048384015&id=1043284392
 * http://www.adrianxw.dk/SoftwareSite/Consoles/Consoles1.html
 * http://msdn2.microsoft.com/en-us/library/ms682022.aspx
*/

/*
NOTAS:	Todos os requesitos minimos foram implementados
		
		*Extras:
			SOM
			COR
			TEMPO
			GoToXY
			CONTADORES
			OPCOES EXTRA NO MENU
			AS RAQUETES ANDAM PARA OS LADOS
			APAGAR O CURSOR
			...

		* Tendo o programa alguns bugs, é aconselhavel correr 
		uma primeira vez sem mexer as raquetes, 
		apenas para verificar a contagem e os respectivos contadores * 
*/



# include <stdio.h>
# include <windows.h>
# include <conio.h> //gotoxy -> Parar o piscar da janela; _getch(  ), _kbhit(  )
# include <time.h> //usado para seed

# include "draw.h"

//tamanho do tabuleiro
# define LIN 26
# define COL 80
# define MID 40

//player 1
# define KEY_ESC 27
# define ARROW_UP 256 + 72
# define ARROW_DOWN 256 + 80
# define ARROW_LEFT 256 + 75
# define ARROW_RIGHT 256 + 77

//Game Info
# define MAX_SCORE 9 //Pontuacao maxima para o final do jogo
# define _COUNT_DOWN 5 //Count down para o jogo comecar 0-9

//STRUCTS
//Ojectos: Raquetes e Bola
struct tagObject
{
	int pos_x;
	int pos_y;
	int move_x;
	int move_y;
	int speed;
	int face;
	int color;
};

struct tagKeyboard
{
	int up;
	int down;
	int left;
	int right;
};

struct tagPlayer
{
	int points;
	struct tagKeyboard control;
};

//functions
int menu( void ); //Menu
void tabuleiro( int tab[][COL] ); //Desenhar tabuleiro
void print_tab( int tab[][COL] ); //Imprimir tabuleiro
int trand( int aux1, int type ); //Gerar um numero
void start_game( struct tagObject racket[], struct tagObject* ball, struct tagPlayer player[], int tab[][COL], int game_cycle );
int arrow_code ( void );
void move_raket ( int tab[][COL], struct tagObject racket[], int i, int move ); //Mover a raquere
void move_raket_left ( int tab[][COL], struct tagObject racket[], int i, int move );
void move_raket_right ( int tab[][COL], struct tagObject racket[], int i, int move );

int main( void )
{
	int tab[LIN][COL]; //tabuleiro
	int seed; //Variavel do Algoritmo SERIE
	int ch; //Codigo das teclas
	int game_cycle = 0; //Ciclo N do tabuleiro
	int c;//som
	int status; //routines status
	int lin_y;
	int col_x;

	//struct
	struct tagObject racket[2];
	struct tagObject ball;
	struct tagPlayer player[2];

	COORD Position; //Posicao do cursor
	CONSOLE_CURSOR_INFO ConCurInf; //Propriedades do cursor

	//handle
	HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    HANDLE hError = GetStdHandle(STD_ERROR_HANDLE);

	//random
	seed = time( NULL ); //Funcao de tempo
	srand( seed ); /* gera uma sequência de valores que se repete igual a
				    * si própria sempre que o programa é executado
					*/

	/* Titulo da consola <windows.h>
	 * Verifica o status da routine, 0 FALSE/ERROR, 1 TRUE
	 */

	status = SetConsoleTitle("Ping-Pong Game");
	if (status == 0)
    {
        status = GetLastError();
        printf("SetConsoleTitle() failed! Reason : %d", status);
        exit(status);
    }

	//Apagar cursor
	ConCurInf.dwSize = 1; //Tamanho do cursor na celula
	ConCurInf.bVisible = FALSE; //Cursor visivel TRUE, FALSE
	SetConsoleCursorInfo(hOut, &ConCurInf); //Declaracao na funcao

	/* Cor do texto
	 * FOREGROUND_RED,
	 * FOREGROUND_GREEN,
	 * FOREGROUND_BLUE,
	 * FOREGROUND_INTENSITY
	 */
	/* Cor de fundo
	 * BACKGROUND_RED
	 * BACKGROUND_GREEN
	 * BACKGROUND_BLUE
	 * BACKGROUND_INTENSITY
	 */
	SetConsoleTextAttribute(hOut, BACKGROUND_BLUE |
								  BACKGROUND_INTENSITY |
								  FOREGROUND_RED |
								  FOREGROUND_GREEN |
								  FOREGROUND_BLUE |
								  FOREGROUND_INTENSITY
								  );
	do
	{
		switch( menu() )
		{
		case '1':
			//Definir posicoes
			game_cycle = 1;
			start_game( racket, &ball, player, tab, game_cycle );
			//Imprimir tabuleiro
			print_tab( tab );

			//Desenhar quadrado de inicio
			Position.X = 23;
			Position.Y = 10;
			SetConsoleCursorPosition(hOut, Position);

  			for( lin_y = 10; lin_y <=  14; lin_y++)
			{
				for( col_x = 23; col_x <= 55; col_x++)
				{
					if(lin_y == 10 || lin_y == 14 || col_x == 23 || col_x == 55)
						printf("*");
					else
						printf(" ");
				}
				Position.Y++;
				SetConsoleCursorPosition(hOut, Position);
			}

			//Count down
			for( c = _COUNT_DOWN; c >= 1; c-- )
			{
				Position.X = 25;
				Position.Y = 12;
				SetConsoleCursorPosition(hOut, Position);
					
				printf( "Game will start in %d secounds", c );

				//Esperar 1 segundo, fazer count down
				if( c <= 3 && c >= 2)
					Beep( 3000, 500 );
				if( c == 1 )
					Beep( 1500, 500 );

				if( c <= 3 )
					Sleep( 500 );
				else
					Sleep( 1000 );
			}

			//Comecar o jogo
			do
			{
				//Controlo das raquetes: UP, DOWN, LEFT, RIGHT && W, S, A, D.
				while ( _kbhit() != 0 ) //KEY_ESC sai do programa a qualquer altura quando pressionada
				{
					ch = arrow_code();
					//printf( "\nKey struck was '%d + %d'\n", getch(), getch() );;
					switch ( ch ) 
					{
					case ARROW_UP:
						move_raket ( tab,  racket, 0, 1 );
						break;
					case ARROW_DOWN:
						move_raket ( tab,  racket, 0, 2 );
						break;
					case ARROW_LEFT:
						move_raket ( tab,  racket, 0, 3 );
						break;
					case ARROW_RIGHT:
						move_raket ( tab,  racket, 0, 4 );
						break;
					case 'w':
						move_raket ( tab,  racket, 1, 1 );
						break;
					case 's':
						move_raket ( tab,  racket, 1, 2 );
						break;
					case 'a':
						move_raket ( tab,  racket, 1, 3 );
						break;
					case 'd':
						move_raket ( tab,  racket, 1, 4 );
						break;
					case 'p': //pause
						while ( _getch() != 'p' )
							Sleep(1);
						break;
					}
				}

				Sleep(20); //Delay para o movimento da bola - 20

				//Quando a bola passa na rede repor o desenho da rede, bola passa por de cima da rede
				if( ball.pos_x-ball.move_x ==  MID )
					tab[ball.pos_y - ball.move_y][ball.pos_x - ball.move_x] = 177;

				//Refleccao das raquetes
				if( tab[ball.pos_y + ball.move_y][ball.pos_x + ball.move_x] == 219 )
						ball.move_x *= -1;
				/*
				 *	//Refleccao das raquetes [ESPECIAL DE CORRIDA] -> NAO ESTA A FUNCIONAR CORRECTAMENTE
				 *	if( tab[ball.pos_y + ball.move_y][ball.pos_x + ball.move_x] == 219 )
				 *	{
				 *		if( ball.pos_x + ball.move_x == racket[0].pos_x )
				 *			c = 0;
				 *		else
				 *			c = 1;
				 *
				 *		if( (racket[c].move_y == 1 && ball.move_y == -1) ||
				 *			(racket[c].move_y == -1 && ball.move_y == 1) ||
				 *			(racket[c].move_y == 0 && ball.move_y == 0) )
				 *				ball.move_y = 0;
				 *
				 *		if( (racket[c].move_y == -1 && ball.move_y == -1) ||
				 *			(racket[c].move_y == 0 && ball.move_y == -1) ||
				 *			(racket[c].move_y == -1 && ball.move_y == 0) )
				 *				ball.move_y = -1;
				 *
				 *		if( (racket[c].move_y == 1 && ball.move_y == 1) ||
				 *			(racket[c].move_y == 1 && ball.move_y == 0) ||
				 *			(racket[c].move_y == 0 && ball.move_y == 1) )
				 *				ball.move_y = 1;
				 *
				 *		ball.move_x *= -1;
				 *	}
				 */
					

				//Refleccao da linha superior
				if( ball.pos_y + ball.move_y == 1 )
					ball.move_y *= -1;

				//Refleccao da linha inferior
				if ( ball.pos_y + ball.move_y == LIN - 1  )
					ball.move_y *= -1;

				//Apagar o ultimo movimento da bola
				tab[ball.pos_y][ball.pos_x] = ' ';

				//Verificar se entra na baliza
				if( ball.pos_x == 2 || ball.pos_x == COL - 2 )
				{
					if(ball.pos_x == racket[1].pos_x)
						player[0].points++;
					else
						player[1].points++;

					//Representar vencedor!
					if(player[0].points == 10)
					{
						Position.X = 5;
						Position.Y = 9;
						draw_image( 3,10 , Position );
						return 0;
					}
					if(player[1].points == 10)
					{
						Position.X = 5;
						Position.Y = 9;
						draw_image( 4,10, Position );
						return 0;
					}
				
					Position.X = 20;
					Position.Y = 13;
					draw_image( 1, player[0].points, Position );
					Position.X = 60;
					Position.Y = 13;
					draw_image( 1, player[1].points, Position );
					Sleep( 3000 );

					start_game( racket, &ball, player, tab, game_cycle );
					tab[ball.pos_y][ball.pos_x] = ' ';
					ball.move_y = trand( 1, -1 ) * ball.speed;
					ball.pos_y = trand( 25, 1 );
					ball.speed = 1;

					if ( ball.pos_x == 2 ) //Baliza player1
					{
						ball.pos_x = 4;
						ball.move_x = 1 * ball.speed;
					}
					if ( ball.pos_x == COL - 2 ) //Baliza player2
					{
						ball.pos_x = COL - 4;
						ball.move_x = -1 * ball.speed;
					}
				}

				//Movimento da bola
				ball.pos_x += ball.move_x; //Somar movimento de x - coluna
				ball.pos_y += ball.move_y; //Somar movimento de y - linha

				//Desenhar a bola na posicao
				tab[ball.pos_y][ball.pos_x] = ball.face;

				//Imprimir tabuleiro
				print_tab( tab );

				game_cycle++;
			
			} while( player[0].points  <= MAX_SCORE && player[1].points <= MAX_SCORE );

			system( "cls" );
			break;
		case '2':
			Position.X = 0;
			Position.Y = 0;
			draw_image( 8, 10, Position );
			Sleep( 2000 );
			system( "cls" );
			break;
		case '3':
			Position.X = 0;
			Position.Y = 0;
			draw_image( 8, 10, Position );
			Sleep( 2000 );
			system( "cls" );
			break;
		case '4':
			Position.X = 0;
			Position.Y = 0;
			draw_image( 7, 10, Position );
			Sleep( 5000 );
			system( "cls" );
			break;
		case '5':
			Position.X = 0;
			Position.Y = 0;
			draw_image( 9, 10, Position );
			Sleep( 5000 );
			system( "cls" );
			break;
		case '0':
			system( "cls" );
			Position.X = 0;
			Position.Y = 0;
			draw_image( 6, 10, Position );
			Sleep( 5000 );
			return 0;
			break;
		default:
			puts( "Invalid Option" );
			break;
		}
	} while( ch!=0 );

	return 0;
}

int menu( void )
{
	int opc;
	COORD Position;

	//handle
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	//desenha tabuleiro
	Position.X = 0;
	Position.Y = 0;
	draw_image( 5, 10, Position );

	//Espera que uma tecla seja primida
	do
	{	opc = _getch();
		if(opc>='0' && opc <='5')
			printf("%c",opc);
	}
	while(opc <'0' || opc >'5');

	return opc;
}

void tabuleiro( int tab[][COL] )
{
	int lin_y;
	int col_x;
	int enter = 1;

	for( lin_y = 1; lin_y < LIN; lin_y++ )
		for( col_x = 1; col_x < COL; col_x++ )
		{
			if( lin_y == 1 || lin_y == LIN - 1 ) //Paredes Horizontais
               tab[lin_y][col_x] = 240; //Caracter
			else
			{
				if( col_x == MID ) //Rede do meio
					tab[lin_y][col_x] = 177; //Caracter
				else
	 				tab[lin_y][col_x] = 32;	//Caracter de espacos
			}
		}
}

void print_tab( int tab[][COL] )
{
	int lin_y;
	int col_x;

	COORD Position;

	//handle
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);

	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);

	//Mostrar tabuleiro, inicio
	for( lin_y = 1; lin_y < LIN; lin_y++ )
	{
		for( col_x = 1;col_x < COL; col_x++ )
		{
			//if( tab[lin_y][col_x] == 'O')
			//	Sleep( 50 );
           	printf( "%c", tab[lin_y][col_x] );
		}
		if ( lin_y != 25 ) //Nao dar ENTER na ultima linha
			printf( "\n" );
	}

}

int trand( int aux1, int type ) 
{  
	//int aux1;
	int aux2;
	
	if( aux1 != 1 )
	{
		aux1--;
		aux1 = (1+(rand()%(aux1-0)+0))+1;
	}

	if( type == -1 ) //Type -1 -> Gerar numero positivo ou negativo
	{
		aux2 = 1+(rand()%(100-0)+0); //Probabilidade 1/2=50%
		if( aux2 <= 50 ) //Se menor que 50 numero passa a negativo
			aux1 *= -1;
	}

	return aux1;
}

void start_game( struct tagObject racket[], struct tagObject* ball, struct tagPlayer player[], int tab[][COL], int game_cycle )
{
	int c;

	//Inicializar o tabuleiro
	tabuleiro( tab );

	//Inicializar bola, apenas na primeira jogada
	if( game_cycle == 1 )
	{
		do //Gerar um numero entre 20 e 60
			ball->pos_x = trand( 50, 1 );
			while( !(ball->pos_x > 20 && ball->pos_x < COL - 20 ) );
		do //Gerar um numero entre 1 e LIN
			ball->pos_y = trand( 25, 1 );
			while( !(ball->pos_y > 2 && ball->pos_y < LIN - 2 ) );
	}
	ball->speed = 1;
	ball->move_x = trand( 1, -1 ) * ball->speed;
	ball->move_y = trand( 1, -1 ) * ball->speed;
	ball->face = 'O';

	//Inicializar pontos dos jogadores, apenas na primeira jogada
	if ( game_cycle == 1 )
	{
		player[0].points = 0;
		player[1].points = 0;
	}

	//printf( "%d %d", ball.pos_x, ball.pos_y );
	tab[ball->pos_y][ball->pos_x] = ball->face;

	//Posicoes das raquetes
	racket[0].speed = 1;
	racket[0].pos_x = 2;
	racket[0].pos_y = 11;
	racket[0].move_x = 1 * racket[0].speed;
	racket[0].move_y = 1 * racket[0].speed;
	racket[0].face = 219;

	racket[1].speed = 1;
	racket[1].pos_x = 78;
	racket[1].pos_y = 11;
	racket[1].move_x = 1 * racket[1].speed;
	racket[1].move_y = 1 * racket[1].speed;
	racket[1].face = 219;

	//Desenhar as dimensoes da raquete (5)
	for( c = 1; c <= 5; c++ )
	{
		tab[racket[0].pos_y][racket[0].pos_x] = racket[0].face;
		racket[0].pos_y++;
		tab[racket[1].pos_y][racket[1].pos_x] = racket[1].face;
		racket[1].pos_y++;
	}

	racket[0].pos_y -= 5;
	racket[1].pos_y -= 5;
}

int arrow_code ( void )
{
	int ch = _getch();
	/*
	 * Arrow Keys devolvem dois codigos ascii, normalmente 224 + TECLA
	 * Funcao: Somar 224 (codigo normal das arrow keys) + da TECLA
	 * Vai devolver um numero inteiro apra alem do codigo ascii por causa da soma
	 */
	if ( ch == 0 || ch == 224 )
		ch = 256+getch();

	return ch;
}

void move_raket ( int tab[][COL], struct tagObject racket[], int i, int move )
{
	/* 1 UP     / CIMA
	 * 2 DOWN   / BAIXO
	 * 3 LEFT   / ESQUERDA
	 * 4 RIGHT  / DIREITA
	 */

	switch ( move )
	{
		case 1:
			
			if( (racket[i].pos_y - racket[i].move_y) > 1 )
			{
				tab[racket[i].pos_y + 4][racket[i].pos_x] = ' ';
				racket[i].pos_y -= racket[i].move_y;
				tab[racket[i].pos_y][racket[i].pos_x] = racket[i].face;
			}
			break;
		case 2:
			if( ((racket[i].pos_y + 4) + racket[i].move_y) < LIN - 1 )
			{
				tab[racket[i].pos_y][racket[i].pos_x] = ' ';
				racket[i].pos_y += racket[i].move_y;
				tab[racket[i].pos_y + 4][racket[i].pos_x] = racket[i].face;
			}
			break;
		case 3:
			if( i == 0 )
			{
				if( racket[0].pos_x > 2 )
					move_raket_left(tab, racket, 0, move);
			}
			else
			{
				if( racket[1].pos_x >= 73 )
					move_raket_left(tab, racket, 1, move);
			}

				break;
		case 4:
			if( i == 0 )
			{
				if( racket[0].pos_x <= 7 )
					move_raket_right(tab, racket, 0, move);
			}
			else
			{
				if( racket[1].pos_x < COL -2 )
					move_raket_right(tab, racket, i, move);
			}
	}
}

void move_raket_left ( int tab[][COL], struct tagObject racket[], int i, int move )
{
	int c;

	racket[i].pos_x -= racket[i].move_x; //Avancar para a esquerda N celula

	//Apagar as dimensoes da raquete (5)
	for( c = 1; c <= 5; c++ )
	{
		tab[racket[i].pos_y][racket[i].pos_x + racket[i].move_x] = ' ';
		tab[racket[i].pos_y][racket[i].pos_x] = racket[i].face;
		racket[i].pos_y++;
	}

	racket[i].pos_y -= 5;
}

void move_raket_right ( int tab[][COL], struct tagObject racket[], int i, int move )
{
	int c;

	racket[i].pos_x += racket[i].move_x; //Avancar para a direita N celula

	//Apagar as dimensoes da raquete (5)
	for( c = 1; c <= 5; c++ )
	{
		tab[racket[i].pos_y][racket[i].pos_x - racket[i].move_x] = ' ';
		tab[racket[i].pos_y][racket[i].pos_x] = racket[i].face;
		racket[i].pos_y++;
	}

	racket[i].pos_y -= 5;
}