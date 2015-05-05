#include <stdio.h>
#include <stdlib.h>

int main()
{
	int methus;
	int age;
	char years[10];
	
	puts("how old are you?");
	gets(years);
	age=atoi(years);
	printf("so you are %d years old? \n How old is methusulah then?", age);
	gets(years);
	methus=atoi(years);
	printf("methusulah was %d years old and you are only %d years old. wowooweewah.", methus, age);
	return(0);
}