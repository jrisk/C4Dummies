/* Countdown using a do-while loop */

#include <stdio.h>

void main()
{
	int start;
	
	printf("countdown starts from whatever number you choose between 1-100: ");
	
	scanf("%d", &start);
	
	do
	{
		printf("T-minus %d\n", start);
		start--;
	}
		while (start > 0);
		printf("Zero! Blast off!");
		
}
		