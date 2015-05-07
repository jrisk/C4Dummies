#include <stdio.h> /* showcases the ASCII character and number that 1 character can hold simultaneously  */

int main() {

	char key;
	
	printf("type a character: \n");
	key=getchar();
	printf("so you typed the keyboard character '%c' ", key);
	printf("which to the computer is the number '%d'", key);
	return(0);
	}
	