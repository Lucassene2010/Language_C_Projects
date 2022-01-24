/*
	Author: Lucas Henrique
	Email: lucassene2010@gmail.com
	GitHub: https://github.com/Lucassene2010
	Exercise 37 from document attached
*/

/////////////////////////////////////////////
/// Compilation directives
/////////////////////////////////////////////

#include <stdio.h>
#define OneToTwo ( (float) 1.00 )
#define ThreeToFour ( (float) 1.40 )
#define MoreFive ( (float) 2.00 )
#define SixtyMinutes 60

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
	float Multiplier,Time_pay;
	int H_entry, M_entry, H_depart, M_depart;
	int Time_entry, Time_depart, total_time;
	
	printf("\nInput the entry time\n");
	printf("\nHours: ");
	scanf("%d",&H_entry);
	printf("\nMinutes: ");
	scanf("%d",&M_entry);

	printf("\nInput the departure time: \n");
	printf("\nHours: ");
	scanf("%d",&H_depart);
	printf("\nMinutes: ");
	scanf("%d",&M_depart);

	Time_entry = M_entry + ( SixtyMinutes * H_entry );
	Time_depart = M_depart + ( SixtyMinutes * H_depart );
	total_time = Time_depart - Time_entry;

	if( total_time >= SixtyMinutes * 5 )
	{
		Multiplier = MoreFive;
	}
	else if( total_time >= SixtyMinutes * 3 )
	{
		Multiplier = ThreeToFour;
	}
	else
	{
		Multiplier = OneToTwo;
	}

	if( (total_time % SixtyMinutes) )
	{
		Time_pay = ( (float) (H_depart - H_entry) + 1.0 ) * Multiplier;
	}
	else
	{
		Time_pay = (float) (H_depart - H_entry) * Multiplier;
	}
	printf("The amount to be paied is: %.2f", Time_pay);
}