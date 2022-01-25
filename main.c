/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 40 from document attached
*/

/////////////////////////////////////////////
/// Compilation directives
/////////////////////////////////////////////

#include <stdio.h>
#include <stdint.h>
#define MIN_COUST 12000.00
#define MAX_COUST 25000.00
#define Multiplier_porcent(X) X > 0 ? ( X /100 ) : 0

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
	uint8_t distributor_porcent, tax_porcent;
	float factory_coust,total_coust;

	printf("\ninput the factory value of the car: ");
	scanf("%f", &factory_coust);

	if(factory_coust <= MIN_COUST)
	{
		distributor_porcent = 5;
		tax_porcent = 0;
	}
	else if(factory_coust > MAX_COUST)
	{
		distributor_porcent = 15;
		tax_porcent = 20;
	}
	else
	{
		distributor_porcent = 10;
		tax_porcent = 15;
	}

	total_coust = factory_coust + factory_coust*(Multiplier_porcent((float)distributor_porcent)) + factory_coust*(Multiplier_porcent((float)tax_porcent));
	printf("\nCoust total: %.2f", total_coust);

}