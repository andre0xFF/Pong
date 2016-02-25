   /* Display message until key is pressed. */
   do
   {
		//while( !_kbhit() )
		//{
			//x = _getche();
	   if(_kbhit())
	   {
		   
			printf( "\nKey struck was '%c'\n", _getche() );
	   }
			/*if (x == 'x')
			{
				printf("\aShutdown");
				return 0;
			}*/
		//}
			//_cputs( "Hit me!! " );
   }while(1);

   /*do
   {
	   while(!_getche())
	   {
		   printf( "\nKey struck was '%c'\n", x );

	   }

   }while(1)*/


/*
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