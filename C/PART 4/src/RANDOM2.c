/* Random numbers that change with each execution using a seed */

#include <stdio.h>
#include <stdlib.h>

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
	int seed;
	
	char s[6];
	
	printf("enter a random number seed (2-65000): ");
	seed=(unsigned)atoi(gets(s));
	srand(seed);
}