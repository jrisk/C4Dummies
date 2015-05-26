/* more printf escape characters */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("Here is the \\b escape sequence: \b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b");
	printf("Here is the \\r carriage return: \r");
	printf("Able\tBaker\tCharlie\t these are tabs: \\t and newline: \\n \n");
	printf("1\t2\t3\n");
	printf("Foxtrot\tUniform\tCharlie\tKilo\n");
	puts("Press enter to exit \v \t \f");
	getchar();
	return(0);
}