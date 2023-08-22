// Convert a string to uppercase
#include <stdio.h>
#include <ctype.h>

// Function Prototype
void convertToUppercase(char *sPtr);

// Main Function That Begin Program Execution
int main(void)
{

	char string[] = "cHaRaCters and %32.98 DoLlars";

	printf("The string before conversion is: %s\n", string);
	convertToUppercase(string);
	printf("The string after conversion is: %s\n", string);

} // End Main

void convertToUppercase(char *sPtr)
{

	while(*sPtr != '\0') {
		printf("In While Loop############################################\n\n\n");

		printf("The Address of *sPtr is: %p\t\n", *sPtr);
		printf("The Value of *sPtr is: %s\t\n", sPtr);

		printf("\n\nIn While Loop############################################\n");
		*sPtr = toupper(*sPtr);
		++sPtr;
	} // End Loop

} // End Convert
