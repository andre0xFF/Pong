void draw_image( int opc1, int opc2, COORD Position )
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE); Position.Y++;	SetConsoleCursorPosition(hOut, Position);

	switch ( opc1 )
	{
	case 1:
		switch ( opc2 ) 
		{
		case 0:
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 1:
			printf( "  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ##" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "# #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 2:
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " #  " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#   " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "####" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 3:
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 4:
			printf( "   # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " # # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " # # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#####" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);		
			break;
		case 5:
			printf( " ###" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " #  " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#   " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "### " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 6:
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#   " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "# # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "## #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 7:
			printf( "####" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  # " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " #  " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " #  " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " #  " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 8:
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 9:
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "# ##" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " # #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "   #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "#  #" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " ## " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 10:
			printf("");
			break;
		}
		break;
	case 2:/*
		switch( opc2 )
		{
		case 1:
			printf( "/|\" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " | " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		case 2:
			printf( " | " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "\|/" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
			printf( "  \ " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "-- >" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "  / " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
		case 3:
			printf( " / " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( "<--" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf( " \ " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
		}*/
		break;
	case 3:                                           
	                        
			printf(" 0000  0       0  0     00000  000      00    0    0 00000 0  0   0000" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0   0 0      0 0  0   0 0     0  0    0 0    0    0   0   00 0  0    " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0   0 0      0 0   0 0  0     0  0      0    0    0   0   00 0  0    " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0000  0      0 0    0   0000  000       0    0 00 0   0   00 0   000 " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0     0     00000   0   0     0 0       0     0000    0   0 00      0" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0     0     0   0   0   0     0  0      0     0 00    0   0 00      0" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0     0000  0   0   0   0000  0   0   00000   0  0  00000 0  0  0000 " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
				       
		break;
	case 4:
			printf(" 0000  0       0  0     00000  000     000    0    0 00000 0  0   0000" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0   0 0      0 0  0   0 0     0  0   0   0   0    0   0   00 0  0    " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0   0 0      0 0   0 0  0     0  0       0   0    0   0   00 0  0    " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0000  0      0 0    0   0000  000       0    0 00 0   0   00 0   000 " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0     0     00000   0   0     0 0      0      0000    0   0 00      0" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0     0     0   0   0   0     0  0    0       0 00    0   0 00      0" ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" 0     0000  0   0   0   0000  0   0  00000    0  0  00000 0  0  0000 " ); Position.Y++;	SetConsoleCursorPosition(hOut, Position);
		break;
	case 5:
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*- PING-PONG GAME MENU  -*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                        1. Play Ping-Pong ( 2 Players )                     *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                      2. Check Top10 Under Construction...                  *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                    3. Change controls Under Construction...                *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                  4. Help                                   *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                  5. About                                  *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                  0. Exit                                   *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* ");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
		break;
	case 6:
			printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*- PING-PONG GAME CREDITS  *-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                      @@  @@        @@  @@@@@@@@@    @@@@@@@@   @@@@@@@@    *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" * AUTHORs:             @@  @@@@      @@  @@              @@      @@          *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *  « Andre Fonseca     @@  @@  @@    @@  @@              @@      @@          *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *  « Tiago Durao       @@  @@  @@    @@  @@@@@@@@@       @@      @@@@@@@@    *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *  « N*I050043         @@  @@    @@  @@  @@              @@      @@          *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *  « N*I050008         @@  @@    @@  @@  @@              @@      @@          *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                      @@  @@      @@@@  @@              @@      @@          *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" * CLASS:               @@  @@        @@  @@@@@@@@@       @@      @@@@@@@@    *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *  « TGPSI | 01                                                               *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" * YEAR                                                                       *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *  « 2006/2007                                                               *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
		break;
	case 7:
			printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-  HELP  -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" * DEFAULT KEYS:                                                              *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *     Player 1 - UP    -> ARROW UP                                           *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                DOWN  -> ARROW DOWN                                         *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                LEFT  -> ARROW LEFT                                         *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                RIGHT -> ARROW RIGHT                                        *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *     Player 2 - UP    -> W                                                  *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                DOWN  -> S                                                  *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                LEFT  -> A                                                  *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                RIGHT -> D                                                  *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
		break;
	case 8:
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-  UNDER CONSTRUCTION  -*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* ");Position.Y++;	SetConsoleCursorPosition(hOut, Position);

		break;
	case 9:
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-   ABOUT  -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-**-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                  PONG is a video game released originally                  *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*     as a coin-operated arcade game by Atari Inc. on November 29, 1972      *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                 PONG is based on the sport of table tennis                 *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*            0000  00000 0  0  0000        0000   0000  0  0  0000           *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*            0   0   0   00 0  0           0   0 00  00 00 0  0              *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*            0   0   0   00 0 0            0   0 0    0 00 0 0               *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*            0000    0   00 0 0  00        0000  0    0 00 0 0  00           *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*            0       0   0 00 0   0        0     0    0 0 00 0   0           *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*            0       0   0 00 00  0        0     00  00 0 00 00  0           *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*            0     00000 0  0  0000        0      0000  0  0  0000           *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);                                                
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*                                                                            *");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* ");Position.Y++;	SetConsoleCursorPosition(hOut, Position);
			break;
	}
}
		
		
	  