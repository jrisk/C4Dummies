#include <stdio.h>

int main()
{
	char name[20];
	char color[20];
	printf("what is your name?");
	scanf("%s", name);
	printf("okay %s, what's your favorite color?", name);
	scanf("%s", color);
	printf("%s is a nice color, %s", color, name);
	return(0);
}