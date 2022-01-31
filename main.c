/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 31 from document attached
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
#define RangeToFirstCount (uint8_t) 1
#define BootNumber (uint8_t) 1
#define RangeToSecondCount (uint8_t) 2
#define MaxCount (uint8_t) 50

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
	system(CLEAR);
	uint8_t i, j;
	float sum;
	for(i = BootNumber , j = BootNumber; i <= MaxCount; i += RangeToFirstCount, j += RangeToSecondCount)
	{
		sum += ( (float) j / (float) i );
	}
	printf("sum: %.2f ", sum);
}