#include <stdio.h> /*monopoly board game problem*/
#include <stdlib.h>

int main() {
	int houses, hotels, total;
	char temp[4];
	
	printf("type the number of houses you own\n");
	gets(temp);
	houses=atoi(temp);
	
	printf("type the number of hotels you own\n");
	gets(temp);
	hotels=atoi(temp);
	
	printf("the total cost you are assessed for from the community chest is:\n");
	total=houses*40+hotels*115;
	printf("$%d", total);
	return(0);
	}