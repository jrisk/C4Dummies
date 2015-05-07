#include <stdio.h>

int main()
{
	char key;
	
	puts("type your favorite keyboard key");
	scanf("%c", &key);
	printf("you favorite character is %c then. Neat.", key);
	
	return(0);
}