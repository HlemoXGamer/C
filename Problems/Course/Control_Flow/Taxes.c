// Program To Calc The Taxes Of Weekly Pay
#include <stdio.h>
#include <stdlib.h>

// Pesudo Code
/**********************************************

Intialize The Variables And Constants
[weeklyPay, payRate, overTime, grossPay, netPay, taxes, TAXRATE]

get weeklyPay value

if weeklyPay greater than 40
	weeklyPay = 40
	overTime = weeklyPay - 40

calc gross pay
	weeklyPay * payRate  +  overTime * payRate*1.5	

calc taxes
	if grossPay less or equal 300
		taxes = grossPay * TAXRATE
	else if grossPay greater 300 and less or equal 450
		taxes = 300 * TAXRATE
		taxes += (grossPay - 300) * TAXRATE
	else if grossPay greater 450
		taxes = 300 * TAXRATE
		taxes += 150 * TAXRATE
		taxes += grossPay - 450 * TAXRATE	

calc net pay
	grossPay - taxes

***********************************************/

// Constants
#define PAYRATE 12
#define TAXRATE_300 0.15
#define TAXRATE_150 0.20
#define TAXRATE_REST 0.25

// main Function that begins program execution
int main( void )
{
	
	// Initialzation phase
	int weeklyHours;
	int overTime;
	float grossPay;
	float taxes;	
	float netPay;

	// Processing phase
	// Get Weekly Hours
	printf("Enter How Many Hours You Have Worked This Week: ");
	scanf("%i", &weeklyHours);
	
	// Get OverTime Hours
	if (weeklyHours > 40){
		overTime = weeklyHours - 40;
		weeklyHours = 40;
	} // end if

	// Calc Gross Pay
	grossPay = weeklyHours * PAYRATE;
	grossPay += overTime * ( PAYRATE * 1.5 );
	
	// Calc Taxes
	if ( grossPay <= 300 ){
		taxes = grossPay * TAXRATE_300; 
	} // end if
	else if ( grossPay > 300 && grossPay <= 450 ){
		taxes = 300 * TAXRATE_300;
		taxes += (grossPay - 300) * TAXRATE_150; 
	} // end else if
	else if ( grossPay > 450 ){
		taxes = 300 * TAXRATE_300;
		taxes += 150 * TAXRATE_150;
		taxes += ( grossPay - 450 ) * TAXRATE_REST;	
	} // end else if

	// Calc Net Pay
	netPay = grossPay - taxes;

	// Termination phase
	printf("Your Gross Pay Is: %.2f\n", grossPay);
	printf("Your Taxes Is : %.2f\n", taxes);
	printf("Your Net Pay: %.2f\n", netPay);

	return 0;

} // Function End
