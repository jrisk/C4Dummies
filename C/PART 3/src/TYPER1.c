#include <stdio.h>

void main()
{
	char ch;
	
	printf("type anything, press ~ tilde key and enter to stop");
	
	for (;;)
	{
		ch=getchar();
		if (ch == '~')
		{
			break;
		}
	}
}