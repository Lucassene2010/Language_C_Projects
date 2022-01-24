/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 52 from document attached
*/

/////////////////////////////////////////////
/// Compilation directives
/////////////////////////////////////////////

#include <stdio.h>

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
	float x[3];
	printf("input a first bettor paid amount: \n");
	scanf("%f",x);
	printf("input a second bettor paid amount: \n");
	scanf("%f",x+1);
	printf("input a third bettor paid amount: \n");
	scanf("%f",x+2);
	printf("prize value for the first paid: %.2f%%\n",(100*x[0]/(x[0] + x[1] + x[2])));
	printf("prize value for the second paid: %.2f%%\n",(100*x[1]/(x[0] + x[1] + x[2])));
	printf("prize value for the third paid: %.2f%%\n",(100*x[2]/(x[0] + x[1] + x[2])));
}