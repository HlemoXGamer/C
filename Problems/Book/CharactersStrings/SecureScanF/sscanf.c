#include <stdio.h>

int main(void)
{

	char s[] = "31298 87.375";
	int x;
	double y;

	sscanf(s, "%d%lf", &x, &y);
	char c[80];
	sprintf(
		   c,
		   "%s\n%s%6d\n%s%8.3f\n", 
		   "The values stored in charcter array s are:", 
		   "integer:", x, 
		   "double:", y
		  );

	printf("%s", c);


} // End main
