// 7.3
#include <stdio.h>
#include <stdlib.h>

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	float numbers[10] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9}; // (a)
	float *nPtr = NULL; // (b)

	// print the numbers with index notaion
	for (int i = 0; i < 10; i++){
		printf("%.1f  ",numbers[i]); // (c)
	} // End Loop
	
	puts("");

	nPtr = numbers; // (d)
	*nPtr = numbers[0]; // (d)

	// print the numbers with pointer/offset notation
	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", (*nPtr + i)); // (e)
	} // End Loop

	puts("");

	// print the numbers with pointer/offset notation with the array name as the pointer
	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", *(numbers + i)); // (f)
	} // End Loop

	puts("");

	// print the numbers with indexing the pointer
	for (int i = 0; i < 10; i++) {
		printf("%.1f  ", nPtr[i]); // (g)
	} // End Loop

	puts("");

	// refer to element 4 of the array with 4 ways (h)
	printf("%.1f\n", numbers[3]); // array index notation
	printf("%.1f\n", *(numbers + 3)); // pointer/offset notation with the array name as the pointer
	printf("%.1f\n", nPtr[3]); // pointer index notation with nPtr
	printf("%.1f\n", *(nPtr + 3)); // pointer/offset notation with nPtr

	puts("");

	printf("%.1f\n", *(nPtr + 8)); // (i)

	puts("");
	nPtr = &numbers[5];
	printf("%.1f\n", *(nPtr - 4));

   return 0;

} // End Main

























