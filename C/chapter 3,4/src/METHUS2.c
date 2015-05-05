#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age;
	char years[8];
	puts("how old was methusulah?");
	gets(years);
	age=atoi(years);
	printf("Methusulah was %d years old", age);
	return(0);
}