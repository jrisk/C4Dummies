/*Exercise 4-1. Write the function strindex(s,t) which returns the position of the rightmost
occurrence of t in s , or -1 if there is none.*/

#include <stdio.h>

#define MAXLINE 1000

int strindex(char s[], char tright);
void makeline(char s[], int limit);

int main() {

	int r;

	char string[MAXLINE];

	char trightmost = 'x';

	makeline(string, MAXLINE);

	r = strindex(string, trightmost);

	printf("%d", r);
	
}

void makeline(char strang[], int lim) {

	int i, c;

	for (i = 0; i < lim - 1 && ((c = getchar()) != EOF) && (c != '\n'); i++)
		strang[i] = c;

	if (c == '\n') { // must make sure the line knows where to cut ^ off in the while loop, \n
		strang[++i] = c;
	}
	
	strang[i] = '\0';

}

int strindex(char str[], char index) {

	int i, j, k, m = -1;

	for (i = 0; str[i] != '\0'; i++) {

			if (index == str[i]) {
				m = i;
			}
		}
	 return m;
}