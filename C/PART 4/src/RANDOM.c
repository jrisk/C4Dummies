/* random numbers */

#include <stdio.h>
#include <stdlib.h>

int random(void);

int main()
{
	int x;
	
	for (x=0; x < 100; x++)
	{
		printf("%d\t", random());
		}

	printf("\nRANDMAX is equal to %u\n", RAND_MAX);
	return(0);
}

int random(void)
{
	int r;
	
	r=rand();
	return(r);
}