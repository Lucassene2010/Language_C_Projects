/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 6 from document attached
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
	float x;
	printf("input a Celsius temperature: \n");
	scanf("%f", &x);
	printf("Change the Celsius for Fahrenheit temperature: %.2f\n",x*(9.0/5.0)+32);
}