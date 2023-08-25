// Bubble Sorting Ascending or Descending Order
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Funtions Prototypes
void bubble(int work[], size_t size, int (*compare)(int a, int b) );
int ascending(int a, int b);
int descending(int a, int b);

// Main Function That Begin Program Execution
int main(void)
{

	// Initialzation Phase
	int a[SIZE] = {2, 6, 4, 8, 10 , 12, 89, 68, 45, 37};
	printf("%s", "Enter 1 to sort in ascending order,\n" "Enter 2 to sort in descending order: ");
	int order; // 1 for ascending order or 2 for descending order
	scanf("%d", &order);

	puts("\nData Items in Original order");

	// Print The Array
	for (size_t counter = 0; counter < SIZE; ++counter) {
		printf("%5d", a[counter]);
	} // End Loop

	// Proccessing Phase
	// sort array in ascending order; pass function ascending as an argument to specify ascending sorting order
	if (order == 1) {
		bubble(a, SIZE, ascending);
		puts("\nData items in ascending order");
	} // End If

	else {
		bubble(a, SIZE, descending);
		puts("\nData items in descending order");
	} // End Else
	
	for (size_t counter = 0; counter < SIZE; ++counter) {
		printf("%5d", a[counter]);
	} // End Loop

	puts("\n");

   return 0;

} // End Main

// multipurpose bubble sort; parameter compare is apinter to the comparison function that determines sorting order
void bubble(int work[], size_t size, int (*compare)(int a, int b))
{

	// Functions Prototypes
	void swap(int *element1Ptr, int *element2Ptr);

	// Loop to control passes
	for (unsigned int pass = 1; pass < size; pass++) {
		for (size_t count = 0; count < size - 1; count++) {
			// if adjacent elements are out of order, swap them
			if ((*compare)(work[count], work[count + 1])) {
				swap(&work[count], &work[count + 1]);
			} // End If
		} // End Inner Loop
	} // End Outer Loop

} // End Bubble

// swap values at memory locations to which element1Ptr and element2Ptr point to
void swap(int *element1Ptr, int *element2Ptr)
{

	int hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;

} // End Swap

// ascending order
int ascending (int a, int b)
{
	return b < a;
} // End Ascending

// decending order
int descending(int a, int b)
{
	return b > a;
} // End Decending

















