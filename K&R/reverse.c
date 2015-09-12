/* improved reverse function */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char s[]) {
	
	int c, i, j;

	for (i = 0, j = strlen(s)-1; i < j; i++, j--) {

		c = s[i];
		s[i] = s[j];
		s[j] = c;

	}

}

int main() {

	char stringer[] = "good golly miss molly";

	reverse(stringer);

	printf("%s", stringer);

}