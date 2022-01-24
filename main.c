/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 25 from document attached
*/

/////////////////////////////////////////////
/// Compilation directives
/////////////////////////////////////////////

#include <stdio.h>
#include <math.h>

/////////////////////////////////////////////
/// Global variables
/////////////////////////////////////////////

	//None

/////////////////////////////////////////////
/// Structs and Enums
/////////////////////////////////////////////

	//None

/////////////////////////////////////////////
/// Functions
/////////////////////////////////////////////

	//None

/////////////////////////////////////////////
/// Init Code
/////////////////////////////////////////////

void main (void)
{
	float a,b,c,delta,root1,root2;
	
	printf("Input the values of second degree equation: Ax^2 + Bx + C\nValue A: ");
	scanf("%f", &a);
	printf("\nValue B: ");
	scanf("%f", &b);
	printf("\nValue C: ");
	scanf("%f", &c);

	if(0 != a)
	{
		delta = ( pow(b,2) - (4*a*c) );

		if(delta < 0)
		{
			printf("\nthere is no real root");
		}
		else if(delta > 0)
		{
			root1 = ( (-1)*b + sqrt(delta) )/(2*a);
			root2 = ( (-1)*b - sqrt(delta) )/(2*a);

			printf("\nthere are two real roots\n");
			printf("First root: %.2f\n", root1);
			printf("Second root: %.2f\n", root2);	
		}
		else
		{
			root1 = (-1)*b/(2*a);
			printf("\nthere is a real root: %.2f", root1);
		}
	}
	else
	{
		printf("\nThe equation is not a degree equation, because the A value is zero\n");
	}
}