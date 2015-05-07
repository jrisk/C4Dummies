#include <stdio.h>

void main() {
	
	char blow;
	
	printf("Would you like your computer to explode?");
	
	blow=getchar();
/* make it easier for those not wanting their comp to explode and easy for those that do */	
	if (blow == 'Y' || blow == 'y') 
	{
		printf("KABOOM");
	}
	else 
	{
		printf("defused");
	}
}