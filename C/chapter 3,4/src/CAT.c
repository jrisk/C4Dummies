#include <stdio.h>

int main()
{
	char cat[20];
	puts("if you had a kitty cat, what would their name be?");
	gets(cat);
	printf("%s is a neat name. What if you had 2 cats, what would the 2nd one be \
	named?", cat);
	gets(cat);
	printf("%s is another cool name for a cat.", cat);
	return(0);
}