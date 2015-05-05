#include <stdio.h>
#include <stdlib.h>

int main()
{
	char years[10];
	int methus;
	int age;
	int diffage;
	
	methus=969;
	puts("How old are you? ");
	gets(years);
	age=atoi(years);
	diffage=methus-age;
	
	printf("You have %d years to go before you're as old as methuselah", diffage);
	return(0);
}
	