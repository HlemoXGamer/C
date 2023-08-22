// Bubble Sorting Useing Pass By Reference
#include <stdio.h>
#define SIZE 10

// Functions Prototype
// int * const array means you can't make the pointer point to another interger put you can change what array points to.
void bubbleSort(int * const array, const size_t size);

// Main Function That Begins Execution Of A Program
int main(void)
{

	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };

	puts("Data items in original order");

	for (size_t i = 0; i < SIZE; i++){
		printf("%4i", a[i]);
	} // End Loop
	
	bubbleSort(a, SIZE);	

	puts("\nData items in ascending order");

	for (size_t i = 0; i < SIZE; i++){
		printf("%4i", a[i]);
	}

	puts("");

} // End Main

// Sort an array of integers using bubble sort algorithm
void bubbleSort(int * const array, const size_t size)
{
	void swap(int *e1Ptr, int *e2Ptr); // *e1Ptr => Element Number 1 in Array Pointer

	for (unsigned int pass = 0; pass < size - 1; pass++){
		for (size_t j = 0; j < size - 1; j++){
			if (array[j] > array[j + 1]) {
				swap(&array[j], &array[j + 1]);
			} // End If
		} // Inner Loop
	} // End Outer Loop
	

} // End Bubble Sort

// Swap values at memory locations to which Element 1 and 2 Pointer point
void swap(int *e1Ptr, int *e2Ptr)
{

	int hold = *e1Ptr;
	*e1Ptr = *e2Ptr;
	*e2Ptr = hold;

} // End Swap
