#include <stdio.h>
#include <stdlib.h>

int main() {
	char weight[4];
	int w;
	
	printf("what is your weight? \n");
	gets(weight);
	w=atoi(weight);
	printf("here's your weight: %d \n", w);
	w=w+1;
	printf("here's your weight after the appetizers: %d \n", w);
	w=w+8;
	printf("here's your weight after the cake: %d \n", w);
	printf("lardo");
	return(0);
	}
	