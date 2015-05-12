/* using switch-case instead of if-else */

#include <stdio.h>
#include <stdlib.h>

void main()
{

	char c;
	
	puts("please make a selection\n");
	
	printf("1 - Cotton Candy\n");
	printf("2 - Chocolate Bar\n");
	printf("3 - Popcorn\n");
	printf("4 - Jolly Ranchers\n");
	printf("5 - Butterfinger\n");
	
	c=getchar();
	switch(c)
	{
	case '1':
		printf("cotton candy is $5.00");
		break;
	case '2':
		printf("chocolate is $4.00");
		break;
	case '3':
		printf("popcorn is $6.00");
		break;
	case '4':
		printf("Jolly Rancher is $3.00");
		break;
	case '5':
		printf("Butterfinger is $4.00");
		break;
	default:
		printf("thats not a proper selection");
	}
}