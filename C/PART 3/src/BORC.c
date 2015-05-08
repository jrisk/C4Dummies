/* Break or Continue */

#include <stdio.h>

void main()
{
	int x=0;
	
	for(;;)
	{
		x++;
		if (x <= 5)
		{
			printf("%d\n", x);
			continue;
		}
	printf("%d is greater than 5!", x);
	break;
	}
}