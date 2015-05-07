#include <stdio.h> /* G/g and 0 make comp go boom */

void main()
{
	char c,d;
	
	printf("Enter the secret character code to initialize self-destruct sequence\n");
	
	c = getchar();
	
	fflush(stdin); /* fpurge(stdin) on *NIX */
	
	printf("Input destruction number to self-destruct the terminal\n");
	
	d = getchar();
	
	if (c == 'G' || c == 'g' && d == '0')
	{
		printf("KAABOOOOOOOOOOOM");
	}
	else
	{
		printf("codes were entered incorrectly. self-destruct sequence cancelled.");
	}
}