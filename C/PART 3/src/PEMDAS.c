/* PEMDAS */
/* Parenthesis, Exponent, Multiplication, Division, Addition, Subtraction
That is the order of operations in any math problem
Please Excuse My Dear Aunt Sally
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
	int mathvar=100 + 5 * 2 - 60 / 3;
	
	printf("%d", mathvar);
	/*even faster...*/
	
	printf("\n%d", 100 + 5 * 2 - 60 / 3);
	
	/* with parenthesis a different result */
	
	printf("\n%d", (100 + 5) * (2 - 60) / 3);
	
	return(0);
	}