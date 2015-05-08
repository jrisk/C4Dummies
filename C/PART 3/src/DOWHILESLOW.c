/* do while with input bound check in while */

#include <stdio.h>

void main()
{
	int start;
	long delay;
	
	
	do
	{
		printf("Pick a number between 1 and 100 to start the countdown from: ");
		scanf("%d", &start);
		}
		
	while (start < 1 || start > 100);
	
	do
	{
		printf("T-minus %d\n!", start);
		start--;
		for (delay = 0; delay < 500000000; delay++); /* this for loop just spins the disc and wastes time counting */
		}
	while (start > 0);
		printf("Zero! Blast off!");
}