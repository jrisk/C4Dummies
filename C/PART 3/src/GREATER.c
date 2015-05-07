#include <stdio.h>

int main() 
{
	char a,b;
	
	printf("type a character from the keyboard\n");
	
	a = getchar();
	
	fflush(stdin); /* must flush standard input from getchar() or else enter key is read as part of input
		and forced into char b*/
		
	/* can also use fpurge(stdin), which erases any info waiting to be read to file, like pressing enter after
	typing a character from your keyboard */
	
	/* this is the drawback of using getchar() to read keyboard commands. It doesn't. It reads "standard input" 
	rather, use getche() or getch() to specifically get a keyboard stroke*/
	
	printf("type another character from the keyboard\n");
	
	b = getchar();
	
	if (a > b)
	{
		printf("%c is greater than %c", a, b);
		}
	else if (a == b)
	{
		printf("why did you type the same thing twice? this is a comparison practice");
		}
	else if (a < b)
	{
		printf("%c is less than %c", a, b);
		}
	else
	{
	return(0);
	}
}
	