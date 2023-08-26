#include <stdio.h>
#include <string.h>

int main(void)
{

	const char *string = "This is a test";
	char character1 = 'a';
	char character2 = 'z';

	// if character1 was found in string
	if (strchr(string, character1) != NULL)
	{
		printf("\'%c\' was found in  \"%s\".\n", character1, string);
	} // End If
	else 
	{
		printf("\'%c\' was not found in \"%s\".\n", character1, string);
	} // End Else


	// if character2 was found in string
	if (strchr(string, character2) != NULL)
	{
		printf("\'%c\' was found in  \"%s\".\n", character2, string);
	} // End If
	else 
	{
		printf("\'%c\' was not found in \"%s\".\n", character2, string);
	} // End Else


} // End Main
