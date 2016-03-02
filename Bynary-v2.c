/* This converter takes from STDIN a decimal number passed from the keyboard and returns a binary value on the STDOUT*/
//the maximum numeric value allowed on STDIN is 255; eventual sanity checks will be performed
 
#include <stdio.h>

int main ()

{

int d;//This is the decimal value
int r;//This is the remainder
int array[8];//This array is used to finally order the result on the screen

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


while	(d != 0) { //until decimal is different from 0 perform the following function

	(r = d); //assign the value of "decimal number" to variable "r"
	(r %= 2);//verify the remainder of the division between "r" and 2 and assign the value to same variable "r"
	(d = d / 2);//keep iteration of the division of the decimal and assign to the same variable the result of the division by 2
	
	if (r == 0)
	printf ("0");
	
	else printf ("1");
	
	}

printf ("\n\n");	
	
return 0;

}
	


