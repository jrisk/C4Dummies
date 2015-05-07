/* list all ascii character codes */

#include <stdio.h>

void main()
{
	unsigned char a;
	
	for (a=32; a<128; a=a+1)
	{
		printf("%3d = '%c'\t",a,a);
		}
}