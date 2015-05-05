#include <stdio.h>

int main()
{
	char jerk[20];
	printf("Know any jerks?");
	gets(jerk);
	printf("Yeah, the jerk store called and said they're running out of %s!", jerk);
	return(0);
	
}