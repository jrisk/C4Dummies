/* speed program */

#include <stdio.h>
#include <stdlib.h>

#define SPEED 55 /* speed limit */
#define GF "Jessica Righthand" /* girlfriend */

int main()
{
	const int states = 50;
	const char command[] = "Your command: ";
	char str [80];
	char str2 [80];
	int i;

	printf("You know the speed limit is %i round these parts \n", SPEED);
	printf("Take it down a notch and drive at or less than %d \n", SPEED); /* %i and %d both work with a number */
	puts(GF);
	printf(command);
	scanf("%s", str);
	printf(command);
	scanf("%s", str2);
	printf("Your commands were %s and %s \n", str, str2);
	printf("now pick a number:");
	scanf("%d", &i);
	printf("you have chosen %i", i);
	return(0);
}