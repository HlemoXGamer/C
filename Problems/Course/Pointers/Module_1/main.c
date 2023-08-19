// Pointers Declaretion And Initialzation
#include <stdio.h>
#include <stdlib.h>

// Notes
/*
	Indirection:-
		Indirection is The Ability To Reference Something Useing a name, reference or container == Instead Of The Value Itself ==
	
	Pointers:-
		a pointer provides an indirect means of accessing the value of a particular data item
		The Pointer is A Variable whos value is a memory address of another variable
		
*/

// Main Function That Begin Program Execution
int main(void)
{
	
	int number = 99;
	// (*) to indicate that numberPtr is a pointer
	// (&) reference to the address of the number
	int *numberPtr = &number;		
	
	printf("The Value Of Number Is %i (number)\n", number);
	printf("The Address Of Number Is %p (&number)\n", &number);
	printf("The Value Of Number Pointer Is %i (*numberPtr)\n", *numberPtr);
	printf("The Address Of Number Pointer Is %p (numberPtr)\n", numberPtr);

   return 0;

} // End Main
