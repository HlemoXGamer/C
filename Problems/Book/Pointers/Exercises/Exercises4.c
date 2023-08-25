// 7.4
#include <stdio.h>
#include <stdlib.h>

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	float number1 = 7.3;
	float number2;
	float *fPtr = &number1;

	// Processing Phase
	number2 = *fPtr;

	// Termination Phase
	printf("%.1f\n", *fPtr);
	printf("%.1f\n", number2);
	printf("%p\n", &number1);
	printf("%p\n", fPtr);
   return 0;

} // End Main
