// Program Name
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	 int oddNum[SIZE] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	 int *iPtr;

	// Print array using index notation
	for (int i = 0; i < SIZE; i++) {
		printf("%i  ", oddNum[i]);
	} // End Loop
	puts("");

	// assign starting address to iPtr in 2 ways
	iPtr = oddNum;
	iPtr = &oddNum[0];

	// print array using pointer/offset notation
	for (int i = 0; i < SIZE; i++) {
		printf("%i  ", *(iPtr + i));
	} // End Loop
	puts("");

	// print array using pointer/offset notation which array name as a pointer
	for (int i = 0; i < SIZE; i++) {
		printf("%i  ", *(oddNum + i));
	} // End Loop
	puts("");

	// print array using indexing pointer
	for (int i = 0; i < SIZE; i++) {
		printf("%i  ", iPtr[i]);
	} // End Loop
	puts("");

	// Refer to element 3 of oddNum
	printf("%i\n", oddNum[3]); // array index notation	
	printf("%i\n", *(oddNum + 3)); // pointer/offset notation with the array name as pointer
	printf("%i\n", iPtr[3]); // pointer index notation
	printf("%i\n", *(iPtr + 3)); // pointer/offset notation
	puts("");

	// Address
	printf("%p\n", iPtr + 5);
	printf("%i\n", *(iPtr + 5));
	puts("");

	// Address
	iPtr = &oddNum[9];
	iPtr -= 3;
	printf("%p\n", iPtr);
	printf("%i\n", *iPtr);

	// Processing Phase

	// Termination Phase


   return 0;

} // End Main
