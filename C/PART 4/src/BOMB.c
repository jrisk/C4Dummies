#include <stdio.h>

void dropBomb(void);

int main()
{
	printf("press enter to drop the bomb");
	
	getchar();
	
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
		}
	puts("	KABLAM!");
}
	