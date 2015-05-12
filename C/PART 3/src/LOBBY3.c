/* switch case with a while loop */

#include <stdio.h>

void main()
{
	char c;
	int done;
	float total=0;
	
	puts("please make a selection\n");
	
	printf("1 - Cotton Candy\n");
	printf("2 - Chocolate Bar\n");
	printf("3 - Popcorn\n");
	printf("4 - Jolly Ranchers\n");
	printf("5 - Butterfinger\n");
	
	done=0;
	while (!done)
	{
		c=getchar();
		switch(c)
		{
			case '1':
				printf("cotton candy is $5.00\n");
				total+=5;
				break;
			case '2':
				printf("chocolate is $4.00\n");
				total+=4;
				break;
			case '3':
				printf("popcorn is $6.00\n");
				total+=6;
				break;
			case '4':
				printf("Jolly Rancher is $3.00\n");
				total+=3;
				break;
			case '5':
				printf("Butterfinger is $4.00\n");
				total+=4;
				break;
			case '=':
				printf("= comes out to $%.2f\n", total);
				printf("please pay the cashier\n");
				done = 1;
				break;
			default:
				printf("thats not a proper selection\n");
				}
		}
}
