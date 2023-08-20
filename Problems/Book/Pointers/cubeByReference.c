// Cybe By Reference
#include <stdio.h>

// Function Prototype
void cubeByReference(int *nPtr);

// Main Function That Begin Program Execution
int main(void)
{

	int number = 5;
	printf("The original value of number is %i\n", number);
	
	// pass address of number to cubeByReference
	cubeByReference(&number);
	printf("The new value of number is %i\n", number);

   return 0;

} // End Main

void cubeByReference(int *nPtr)
{

	*nPtr = *nPtr * *nPtr * *nPtr;	

} // End cubeByReference

