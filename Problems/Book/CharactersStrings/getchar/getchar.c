#include <stdio.h>
#define SIZE 80

int main(void)
{

	int c;
	char sentence[SIZE];
	int i = 0;

	puts("Enter a line of text:");

	while ( (i < SIZE - 1) && (c = getchar()) != '\n' )
	{

		sentence[i++] = c;

	} // End While

	sentence[i] = '\0';

	puts("\nThe line entered was:");
	puts(sentence);

} // End Main
