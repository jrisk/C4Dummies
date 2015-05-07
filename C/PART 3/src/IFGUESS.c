/* Number Genie */

#include <stdio.h>
#include <stdlib.h> /* this library is necessary because it includes the atoi (ASCII to Integer) function */

int main() {
	char num[2];
	int number;
	
	printf("type a number between 1 and 10\n");
	gets(num);
	
	number=atoi(num);
	
	if(number > 10 || number <= 0)
	{
		printf("choose a number between 1 and 10");
		return(main()); /* putting the main function in the return function returns to the beginning */
	}
	
	if (number < 5)
	{
		printf("number chosen is less than 5\n The Genie knows all...sees all");
		return(0);
	}
	else
	{
		printf("number chosen is more than 5\n The Genie knows all...sees all");
		return(0);
	}
}
	