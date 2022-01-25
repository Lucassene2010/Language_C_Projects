/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 28 from document attached
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

	typedef enum AverageType 
	{
		GeometricAverage = 0,
		WeightedAverage,
		HarmonicAverage,
		ArithmeticAverage
	}AverageType;

/////////////////////////////////////////////
/// Functions
/////////////////////////////////////////////

float geometricAverage(float *number1, float *number2, float *number3);
float weightedAverage(float *number1, float *number2, float *number3);
float harmonicAverage(float *number1, float *number2, float *number3);
float arithmeticAverage(float *number1, float *number2, float *number3);

/////////////////////////////////////////////
/// Init Code
/////////////////////////////////////////////

void main (void)
{
	float number1, number2, number3;
	AverageType Choose;

	printf("\n\nGeometric Average = %d\nWeightedAverage = %d\nHarmonic Average = %d\nArithmetic Average = %d",
		GeometricAverage, WeightedAverage, HarmonicAverage, ArithmeticAverage);
	printf("\n\nChoose the Average: ");
	scanf("%d", &Choose);
	printf("\ninput three numbers\nnumber1: ");
	scanf("%f", &number1);
	printf("number2: ");
	scanf("%f", &number2);
	printf("number3: ");
	scanf("%f", &number3);
	
	switch((int)Choose)
	{
		case GeometricAverage:
		{
			printf( "\nThe Value of result is: %.2f",geometricAverage(&number1, &number2, &number3) );
			break;
		}
		case WeightedAverage:
		{
			printf( "\nThe Value of result is: %.2f",weightedAverage(&number1, &number2, &number3) );
			break;
		}
		case HarmonicAverage:
		{
			printf( "\nThe Value of result is: %.2f",harmonicAverage(&number1, &number2, &number3) );
			break;
		}
		case ArithmeticAverage:
		{
			printf( "\nThe Value of result is: %.2f",arithmeticAverage(&number1, &number2, &number3) );
			break;
		}
		default:
		{
			printf("\nThe choosing value is wrong");
			break;
		}

	}
}

float geometricAverage(float *number1, float *number2, float *number3)
{
	return pow( ( (*number1) * (*number2) * (*number3) ) , (1.0/3.0) );
}

float weightedAverage(float *number1, float *number2, float *number3)
{
	return ( (*number1) + (*number2)*2 + (*number3)*3 )/6;
}

float harmonicAverage(float *number1, float *number2, float *number3)
{
	return 1 / ( pow(*number1,-1) + pow(*number2,-1) + pow(*number3,-1) );
}

float arithmeticAverage(float *number1, float *number2, float *number3)
{
	return ( *number1 + *number2 + *number3 )/3;
}