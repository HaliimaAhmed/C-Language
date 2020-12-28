/* PROGRAM:Numbers.c
   AUTHOR:Halima Ahmed 
   PURPOSE:Printing the numbers from 1 to 100 displaying if its multiple by 3,5,4
*/

int main( int argc, char *argv[] ) {
    if (argc == 4){
   	
	int n1 = atoi( argv[1] );	
	int n2 = atoi( argv[2] );
	int n3 = atoi( argv[3] );

	//iterate over the first 100 integers
	for (int i = 1; i <= 100; i++)
	{  
		//added n3  
	    if(i % n1 == 0 && i % n2 == 0 && i % n3 == 0 ) { // All 3 options
		printf("%2d is divisible by ALL of %d AND %d AND %d\n",i,n1, n2, n3); 
	 	}else if (i % n1 == 0 && i % n2 == 0) //two options 
		printf("%2d is divisible by both %d AND %d\n",i, n1, n2); 
	    else if ( i % n1 == 0 ) 
		printf( "%3d is divisible by %d\n", i, n1 ); //print n1
	    else if ( i % n2 == 0 )
		printf( "%3d is divisible by %d\n", i, n2 ); //print n2
	 	else if ( i % n3 == 0 ) 
		printf( "%3d is divisible by %d\n", i, n3 ); //print n3
	    else 
		printf( "%3d\n",i); // added i 
	}
	// added return statement 
	return 0;
    }
    else
	//changed to printf for the error message 
	printf( "usage: numbers.c [INT] [INT]\n" );

    return EXIT_SUCCESS;
	// end of program 
}
