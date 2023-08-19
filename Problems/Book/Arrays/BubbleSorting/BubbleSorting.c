// The Program Sorting Array Useing Bubble Sort Algorithm
#include <stdio.h>

// Pesudo Code
/*********************************************************

// Initialzation Phase 
int Array[Size];
int Hold; // Stash Variable

// Processing Phase
printf Data Before Sorting
for loop
	printf Array[i]

// Sorting Array
for pass = 1; pass < Size; ++pass
	for i = 0; i < Size -1 ; ++i;
		if Array[i] > Array [i + 1]
			hold = Array[i]
			Array[i] = Array[i + 1]
			Array[i + 1] = hold

// Termination Phase
printf Sorted Data
for loop
	printf Array[i]

**********************************************************/

// Main Function That Begin Execution Of The Program

// Main Function Constants
#define SIZE 25

int main(void)
{

	// Initialzation Phase
	int array[SIZE] = {20, 5, 7, 12, 33, 9, 22, 18, 6, 42, 29, 14, 8, 3, 10, 17, 20, 25, 37, 50, 11, 16, 4, 27, 13};
	int hold;

	// Processing Phase
	puts("Data Before Applying Sorting");
	for (int i = 0; i < SIZE; i++){
		printf("%5i", array[i]);
	} // End Loop

	// Sorting Array
	for (int pass = 1; pass < SIZE; pass++){ // Each Pass Will Go Throw All Of The Array Once
		for (int i = 0; i < SIZE - 1; i++){
			// If The Array Element Bigger That The Next One
			if (array[i] > array[i + 1]){
				// Swaping Thier Places Which The Smaller Be In The First
				hold = array[i];
				array[i] = array[i + 1];
				array[i + 1] = hold;
			} // End If
		} // End Inner Loop
	} // End Outer Loop

	// Termination Phase
	puts("\n Date After Applying Sorting");
	
	for (int i = 0; i < SIZE; i++){
		printf("%5i", array[i]);
	} // End Loop

} // End Main
