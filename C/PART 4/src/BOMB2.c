#include <stdio.h>

#define COUNT 20000000

void dropBomb(void);

void delay(void);

int main()
{

	char x;
	
	printf("press enter to drop the bomb");
	
	x=getchar();
	
	printf("%c used to drop bomb", x);
	
	dropBomb();
	
	printf("O SHI!");
	
	return(0);
	
}

void dropBomb()
{
	int x;
	
	for (x=0; x<20; x++)
	{
		puts("	*");
		delay();
		}
	puts("	KABLAM!");
}

void delay()
{
	long int x;
	
	for (x=0; x<COUNT; x++)
		;
}