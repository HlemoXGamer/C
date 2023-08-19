// Program That Use Enum Data Type
#include <stdio.h>
#include <stdlib.h>

// Pesudo Code
/************************************

enum company = { GOOGLE FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT }
enum company google = GOOGLE .....

*************************************/

// Main Function That Begin Excution Of The Program
int main( void )
{

	// Initialization Phase
	enum Company { GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT };

	// Processing Phase
	enum Company Xerox = XEROX;
	enum Company Google = GOOGLE;
	enum Company Ebay = EBAY;

	// Termination Phase 
	printf("The Value Of Xerox Is: %d\nThe Value Of Google Is: %d\nThe Value Of Ebay Is: %d\n", Xerox, Google, Ebay);	
	
	return 0;	

} // End Of Main Function
