// Program That Displays The Perimeter And Area of A Rectangle
#include <stdio.h>
#include <stdlib.h>

// Pesudo Code
/*****************************

double [ width, height, perimeter, area ]
perimeter = ( width + height ) * 2
area = width * height

display it all :)

******************************/

// main function that begin program execution

int main(void)
{

	// Initialization Phase
	double width, height, perimeter, area;

	// Processing Phase
	printf("Enter The Width: ");
	scanf("%lf", &width);	

	printf("Enter The Height: ");
	scanf("%lf", &height);

	perimeter = ( width + height ) * 2;
	area = width * height;

	// Termination Phase 	
	printf("\nWidth Is: %.2lf\nHeight Is: %.2lf\nPerimeter Is: %.2lf\nArea Is: %.2lf\n", width, height, perimeter, area);

} // End Main Function
