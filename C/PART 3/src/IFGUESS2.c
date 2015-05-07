/* If-else statement in C */

#include <stdio.h>
#include <stdio.h>

int main() {
	char num[2];
	int number;
	
	printf("I am a number genie. Pick a number and I will guess it");
	scanf("%c", num);
	
	number=atoi(num);
	
	if (number > 5) {
		printf("your number is more than 5");
		}
	else if (number < 5) {
		printf(" your number is less than 5");
		}
	else if (number == 5) {
		printf("your number IS 5");
		}
	else if (number > 10 || number <= 0) {
		return(main());
		}
	else {
		printf("whaa? Genie is confused");
	}
	return(0);
}
		