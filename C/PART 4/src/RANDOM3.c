/* random seed generator from time() computer clock */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rando(void);

void seedrando(void);

int main()
{
	int x;
	
	seedrando();
	
	for (x=0; x < 100; x++)
	{
		printf("%d\t", rando());
		}
	return(0);
}

int rando(void)
{
	int r;
	
	r=rand();
	return(r);
}

void seedrando(void)
{
	srand((unsigned)time(NULL));
}