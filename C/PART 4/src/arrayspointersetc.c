/* 10 extra things at the end of the book */

#include <stdio.h>
#include <stdlib.h>

	
	struct character
	{
	char name[10];
	long score;
	int strength;
	int x_pos;
	int y_pos;
	};


int main()
{
	struct character g1, g2, g3, g4;
	
	int combination[4] = { 54, 23, 494, 10}; /* array */
	float temps[] = {99.3, 98.7, 99.0, 98.2, 98.4};
	
	char name[4];
	
	name[0] = 'T';
	name[1] = 'i';
	name[2] = 'm';
	name[3] = '\0';
	
	char myName[10] = "Joe";
	
	printf("%i\n", combination);
	printf("%d\n", temps);
	printf("My name is %s\n", &myName);
	printf(name);
	
	printf("\n character 1 is %s\n They have %d points", g1.name, g2.score);
	
}