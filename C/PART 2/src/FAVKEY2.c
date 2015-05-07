#include <stdio.h>

int main() {
	char key;
	
	printf("whats your favorite keyboard key?");
	key=getchar();
	printf("so your favorite character is %c...", key);
	return(0);
	}