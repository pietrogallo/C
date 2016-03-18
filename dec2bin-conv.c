
 #include <stdio.h>
 
 int main() {
 
 int a[8] = { 0 };
 int i;
 int x = 1;
 int sum = 0;
// int tmp;
 
 printf("Insert a binary number that is lower or equal to 255\n\n");
 for (i = (i - 1); i >= 0; i--) {
 scanf("%d", &a[i]);
 }
 
 for	(i = 0;i < 8;i++) {
 	//tmp = i;
 	if (x & a[ i ])
 	sum += i << 1;
 	else sum += 0; 
	}

 printf ("%d\n\n", sum);
 
 return 0;
 }



