// Program That Coverts The Number Of Minutes To Days And Years
#include <stdio.h>
#include <stdlib.h>

// Pesudo Code
/***********************************

int minutes;
double days, years;

get minuets from user

days = minutes / (60 * 24)             
years = minues / (60 * 24 * 365)

************************************/

// Main Function That Begin Excution Of The Program
int main( void )
{

	// Initialzation Phase
	int minutes;
	double days, years;

	// Processing Phase
	// Get Minutes Value
	printf("Type The Number Of Minutes You Want To Convert: ");
	scanf("%i", &minutes);
	
	// Convertion
	days = minutes / ( 60.0 * 24.0 );	
	years = minutes / ( 60.0 * 24.0 * 365.0 );

	// Instead of use floating number in Calc
	days = minutes / ((double) 60 * 24);

	
	// Termination Phase
	printf("\nThe Number Of Days Is: %f\nThe Number Of Years Is: %f\n", days, years);
	
	return 0;	

} // End Main Function


// Important Note
						// When You Do A Calculation On A Number Use The Same Type => ( 60 * 24 ) is for int not double or float ||||| ( 60.0 * 24.0 ) is for double or float not int
						// Instead You Can Use Conversion
						// days = minutes / ((double) 60 * 24);
