// Program To Reverse String
#include <stdio.h>

#define SIZE 80

// Functions Prototypes
void reverse(const char * const sPtr); 

int main(void)
{

	char sentence[SIZE];

	puts("Enter a line of text:");
	fgets(sentence, SIZE, stdin);

	printf("\n%s", "the line printed backward is:");
	reverse(sentence);

} // End Main

// Recursively outputs characters in string in reverse order
void reverse(const char * const sPtr)
{

	// if end of the string
	if ('\0' == sPtr[0])
	{
		return;
	}
	else 
	{
		reverse(&sPtr[1]);
		putchar(sPtr[0]); // It Didn't run until all nesting levels for reverse done
	}

} // End Reverse


// Display What Happens if String = Hello World
/*
	reverse(Hello World)
		reverse(ello World)
			reverse(llo World)
				reverse(lo World)
					reverse(o World
						reverse( World)
							reverse(World)
								reverse(orld)
									reverse(rld)
										reverse(ld)
											reverse(d)
	printing each char from down to top
	d
	 l
	  r
	   o
	    W
	      
		 o
		  l
		   l
		    e
		     H

*/

