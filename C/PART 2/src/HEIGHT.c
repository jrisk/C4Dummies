#include <stdio.h>
#include <stdlib.h>

int main() {
	float height_in_cm;
	char height_in_inches[4];
	
	printf("what is your height in inches? \n");
	gets(height_in_inches);
	height_in_cm=atoi(height_in_inches)*2.54;
	printf("that is %.2f in centimeters", height_in_cm);
	return(0);
	}
	