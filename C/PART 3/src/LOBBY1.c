/* lots of choices */

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
	
	
	if (c=='1') 
		printf("Cotton Candy. That will be $5.00");
	else if (c=='2') 
		printf("Chocolate Bar. That will be $4.00");
	else if (c=='3')
		printf("Popcorn. That will be $6.00");
	else if (c=='4')
		printf("Jolly Ranchers. That will be $3.00");
	else if (c=='5')
		printf("Butterfinger. That will be $3.00");
	else {
		printf("please make a number selection please\n");
		}
}
	
	