/* Make a grid of numbers next to letters */

#include <stdio.h>

void main()
{
	int a;
	char b;
	
	printf("here's a grid:\n");
	
	for (a = 0; a < 10; a++)
	{
		for (b = 'A'; b < 'K'; b++)
		{
			printf("%d-%c ", a, b);
			}
		putchar('\n');
		}
}