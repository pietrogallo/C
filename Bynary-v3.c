 
#include <stdio.h>

int main ()

{

int d;
int r;
int array[ 8 ] = {0};
int i = 0;

printf ("This is a decimal to binary numeric converter\n\n\n");

printf ("Please insert a decimal value between 1 and 255\n\n");

scanf ("%d" , &d);

if (d > 255)
	{
	printf ("This decimal value is not admitted\n\n");
	
	return 1;
	}

else if (d == 0)
	{
	printf("The binary value is:\n\n");
	printf("0\n\n");
	}

else
	{
	printf ("\nproceeding with conversion...\n\n");
		printf ("\nThe binary value is:\n\n");
	}


	while	(d > 0) { 
	
		(r = d); 
		(r %= 2);
		(array[ i ] = r);
		(d = d / 2);
		(i++);	 
		}

	printf ("%d%d%d%d%d%d%d%d\n\n", array[ 7 ], array[ 6 ], array[ 5 ], array[ 4 ], array[ 3 ], array[ 2 ], array[ 1 ], array[ 0 ] );


	
return 0;

}
	


