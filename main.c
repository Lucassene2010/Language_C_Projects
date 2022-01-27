/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 2 from document attached
*/

/////////////////////////////////////////////
/// Compilation directives
/////////////////////////////////////////////

#ifdef _WIN32
	#include <windows.h>
	#define CLEAR "cls"
#else
	#define CLEAR "clear"
#endif

#include <stdio.h>
#include <stdint.h>
#define Number_To_Count 100
#define First_Number_To_Count 1

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
	uint8_t i;
	system(CLEAR);
	printf("\n\nCounting one to one hundred, one by one via comand repeat for: ");
	for( i = (uint8_t) First_Number_To_Count ; i<=Number_To_Count ; i++ ) printf("%d, ",i);
	printf("\n\nCounting one to one hundred, one by one via comand repeat while: ");
	while(i >= First_Number_To_Count)
	{
		i--;
		printf("%d, ",Number_To_Count - i);
	}
	printf("\n\nCounting one to one hundred, one by one via comand repeat do-while: ");
	do
	{
		i++;
		printf("%d, ",i);

	}while(i < Number_To_Count);
}