 
#include <stdio.h>

int main () 

{

int d;
int a[8];
int i = 0;

printf ("\nInsert a decimal value: \n\n");
printf ("The decimal value should be shorter than 1 byte once translated into binary \n");

scanf ("%d", &d);

if	(d > 255) {

	printf ("Sorry the value is larger than 1 byte\n\n");
	return 1;
	}
	
	else	{
	printf ("Proceeding with conversion...\n\n");
	}
	
while	(d > 0) {
	a[ i ] = d % 2;
	i = i + 1;
	d = d / 2;
	}
	
for	(i = (i - 1); i >= 0; i--) {
		printf ("%d", a[i]);
		}
	printf ("\n\n");
		
return 0;
	
}
		



