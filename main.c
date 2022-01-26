/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 10 from document attached
*/

/////////////////////////////////////////////
/// Compilation directives
/////////////////////////////////////////////

#include <stdio.h>
#include <windows.h>
#define MAN_CALC_IDEAL_WEIGHT(X) ( ( 72.7*X ) - 58)
#define WOMAN_CALC_IDEAL_WEIGHT(X) ( ( 62.1*X ) - 44.7)

/////////////////////////////////////////////
/// Global variables
/////////////////////////////////////////////

	//None

/////////////////////////////////////////////
/// Structs and Enums
/////////////////////////////////////////////

	typedef enum
	{
		woman=0,
		man
	}gender_id;

/////////////////////////////////////////////
/// Functions
/////////////////////////////////////////////

	//None

/////////////////////////////////////////////
/// Init Code
/////////////////////////////////////////////

void main (void)
{
	system("cls");
	float height;
	gender_id ID;

	printf("\n\nWoman = 0\nMan = 1\nInput the gender: ");
	scanf("%d", &ID);
	printf("input the value of height: ");
	scanf("%f", &height);
	switch(ID)
	{
		case woman:
		{
			printf("The ideal weight is: %.2f",WOMAN_CALC_IDEAL_WEIGHT(height));
			break;
		}
		case man:
		{
			printf("The ideal weight is: %.2f",MAN_CALC_IDEAL_WEIGHT(height));
			break;
		}
		default:
		{
			//do nothing
			break;
		}
	}
	
}