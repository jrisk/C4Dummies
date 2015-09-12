#include <stdio.h>
#include <ctype.h>

#define SIZE 1000

/* the loop fills an array with integers by calls to getint 
main() {

int n, array[SIZE], getint(int *);

for (n = 0; n < SIZE && getint(&array[n]) != EOF; n++) */


int getch(void);

void ungetch(int);

/* getint: get next integer from input into *pn */

int getint(int *pn) {
	
	int c, sign;

	while (isspace(c = getch())) /* skip any white space with isspace from ctype*/
	;

	if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
		ungetch(c); /* its not a number */
		return 0;
		}

	sign = (c == '-') ? -1 : 1;

	if (c == '+' || c == '-') /* treats + or - not followed by integer as a representation of 0 */
		c = getch();
	for (*pn = 0; isdigit(c), c = getch())
		*pn = 10 * *pn + (c - '0');
	*pn *= sign;

	if (c != EOF)
		ungetch(c);
	return c;

	}




}