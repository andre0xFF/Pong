#include <stdio.h>

void ping_pong( void )
{
	puts( "oooooooo      oooooooooo    oo      oo      oooooooo" );
	puts( "oo      oo        oo        oooo    oo    oo        " );
	puts( "oo      oo        oo        oooooo  oo  oo          " );
	puts( "oooooooo          oo        oo  oo  oo  oo      oooo" );
	puts( "oo                oo        oo    oooo  oo        oo" );
	puts( "oo                oo        oo    oooo    oo      oo" );
	puts( "oo            oooooooooo    oo      oo      oooooooo" );
	printf( "\n\n" );
	puts( "oooooooo      oooooooo      oo      oo      oooooooo" );
	puts( "oo      oo  oo        oo    oooo    oo    oo        " );
	puts( "oo      oo  oo        oo    oooooo  oo  oo          " );
	puts( "oooooooo    oo        oo    oo  oo  oo  oo      oooo" );
	puts( "oo          oo        oo    oo    oooo  oo        oo" );
	puts( "oo          oo        oo    oo    oooo    oo      oo" );
	puts( "oo            oooooooo      oo      oo      oooooooo" );
	Sleep( 5000 );
	printf( "\n\n\n\n" );
}


#include <windows.h> // inclua esse header

int main(void){    // primeiro pega o handle do stdou STD_OUTPUT_HANDLE
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);	    //prestes a mover o curor para 10,10
	SetConsoleCursorPosition(htsdout,(COORD) { 10, 10 });    // done!
	getchar();
	return 0;
}  

void gotoxy(int x, int y) 
{	
  COORD coord;	
  HANDLE handle;	
  handle = GetStdHandle(STD_OUTPUT_HANDLE);
  coord.X = x;	
  coord.Y = y;	
  SetConsoleCursorPosition(handle, coord);
}