// Binray Search Algorithm Program
#include <stdio.h>
#define SIZE 25

// Function Prototypes
void printHeader(void);
size_t binarySearch( const int a[], int searchKey, size_t low, size_t high );
	void printRow( const int a[], size_t low, size_t mid, size_t high );

// Main Function That Begins Program Execution
int main(void)
{

	// Initialzation Phase
	int array[SIZE];

	// Processing Phase
	// create data for the array
	for (size_t i = 0; i < SIZE; i++){
		array[i] = 2 * i;
	}

	// Get Key Value From The User
	int key; // The Value To Locate In Array	
	printf("%s", "Enter a number between 0 and 48: ");
	scanf("%i", &key);

	printHeader(); // Display The Header Of The Table (No Logic Here In This Function)

	// Search For The Key In The Array
	size_t result = binarySearch(array, key, 0, SIZE - 1);
	
	// Termination Phase
	// Display Results
	if (result != -1){
		printf("\n%i found at index %i\n", key, result);
	} // End If
	else {
		printf("\n%d not found\n", key);
	}

} // End Main

// Function To Perform Binary Search Of An Array
size_t binarySearch(const int a[], int searchKey, size_t low, size_t high)
{

	// Loob Until low index is greater than high index
	while (low <= high) {
		
		// Initialize middle element of subarray
		size_t middle = (low + high) / 2;

		// display subarray used in this while loop
		printRow(a, low, middle, high);
		
		// if searchKey was found
		if (searchKey == a[middle]){
			return middle;
		} // End If
		
		// if searchkey is less than middle element => set new high index
		else if (searchKey < a[middle]) {			
			high = middle - 1;
		} // End Else If

		// if searchKey is bigger then middle element => set new low index
		else if (searchKey > a[middle]) {
			low = middle + 1;
		} // End Else If
	
	} // end while

	return -1;
} // End BinarySearch

// Funtion To Print A Header For Output
void printHeader(void)
{

	puts("\nIndices:");

	// output column head
	for (unsigned int i = 0; i < SIZE; i++){
		printf("%3u ", i);
	} // End Loop

	puts("");

	// output a line
	for (unsigned int i = 1; i <= 4 * SIZE; i++){
		printf("%s", "-");
	} // End Loop

	puts("");

} // End PrintHeader

// Function To Print One Row of output showing the current part of the array being processed
void printRow(const int a[], size_t low, size_t mid, size_t high)
{

	// Loop Through Entire Array
	for (size_t i = 0; i < SIZE; i++){
		
		// display spaces if outside current subarray range
		if(i < low || i > high){
			printf("%s", "    ");
		} // End If
		else if (i == mid) {
			printf("%3d*", a[i]);
		} // End Else If
		else {
			printf("%3d ", a[i]);
		} // End Else
		
	} // End Loop

	puts("\n");

} // End PrintRow
