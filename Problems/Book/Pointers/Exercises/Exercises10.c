// Program Name
#include <stdio.h>
#include <stdlib.h>

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	double value1 = 20.4568;
	double value2;
	double *dPtr;

	// Processing Phase
	dPtr = &value1;
	value2 = *dPtr;

	// Termination Phase
	printf("%f\n", *dPtr);
	printf("%f\n", value2);
	printf("%p\n", &value1);
	printf("%p\n", dPtr);

   return 0;

} // End Main
