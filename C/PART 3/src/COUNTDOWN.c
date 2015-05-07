#include <stdio.h>

void main()
{
	int i;
	
	for (i = 10; i > 0; i--)
	{
		printf("%d\n", i);
		if (i == 1)
		{
			printf("blast off");
		}
	}
}