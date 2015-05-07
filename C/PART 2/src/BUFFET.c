/* Chinese Buffet */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char menu[]="PORK LO MEIN";
	float price = 4.50;
	char answer[8];
	int many = 2;
	
	printf("So what you want? Today special is %s \n", menu);
	puts("how many you want?");
	gets(answer);
	many=atoi(answer);
	printf("You want %d? \n", many);
	printf("That will be $%.2f prease \n", price*many);
	return(0);
}
	