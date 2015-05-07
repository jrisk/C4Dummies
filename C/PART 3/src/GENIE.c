#include <stdio.h>

int main()
{
	char num;
	
	printf("type a number, any number between 1 and 9\n");
	
	num = getchar();
	
	printf("you typed %c!", num);
	
	return(0);
}