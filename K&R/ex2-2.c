#include <stdio.h>
#include <stdlib.h>

/* write a for loop equivalent to the one in getline functions in chapter 1 without || or && */

int checker(int t, int c);

char asci[20];

main() {

	/* i < lim -1 && (c = getchar()) != EOF && c != '\n' */

	char asci[] = "astring";
	int i, c, thing;

	thing = 0;
	
	for (i = 0; checker(i,c); i++) {
		printf("%d\n", i);
	}

}

int checker(int i, int c) {
	int lim = 100;

	return (i < (lim - 1) && (c = getchar()) != EOF && c != '\n');	


}