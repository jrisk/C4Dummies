#include <stdio.h>

#define COUNT 20000000

void dropBomb(void);
void delay(void);

int deaths;

int main()
{
	char x;
	
	deaths=0;
	
	for(;;)
	{
	printf("press ~ then enter to escape\n");
	printf("press Enter to drop bomb\n");
	x=getchar();
	fflush(stdin);
	if (x=='~') 
	{
		break;
		}
	dropBomb();
	printf("%d people killed by bombing!\n",deaths);
	}
	return(0);
	
}

void dropBomb() 
{
	int x;
	for (x=20; x>1; x--)
	{
		puts("			*");
		delay();
	}
	puts("BOOOOOOOMMM!!!!!");
	deaths+=1500;
}

void delay()
{
	long int x;
	for (x=0; x<COUNT; x++)
	;
}
		
		