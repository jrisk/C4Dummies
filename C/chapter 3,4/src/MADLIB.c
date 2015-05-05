/* MADLIB program 
Written by Joe Risk */
#include <stdio.h>

int main()
{
	char adjective[30];
	char food[30];
	char chore[20];
	char furniture[20];
	
	/* get words to use in madlib: */
	
	printf("Enter an adjective: "); /*prompt*/
	scanf("%s", &adjective);		/*input*/
	printf("Enter a kind of food: ");
	scanf("%s", &food);
	printf("Enter a chore: ");
	scanf("%s", &chore);
	printf("Enter a piece of furniture: ");
	scanf("%s", &furniture);
	/* display output */
	printf("Don't touch that %s %s!\n", adjective, food);
	printf("I just %s the %s!", chore, furniture);
	return(0);
}
	