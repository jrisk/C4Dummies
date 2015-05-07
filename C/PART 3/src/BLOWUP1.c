#include <stdio.h>

void main() /* no difference between using void main or int main except nothing is returned */
{
	char blow;
	
	printf("Would you like your computer to explode?");
	
	blow=getchar();
	
	if (blow == 'N' || blow == 'n')
	{
		printf("defused. phew...");
	}
	else
	{
		printf("KABOOM!");
	}
	/* no return necessary, any return is voided out */
}