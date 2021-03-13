#include <stdio.h>

/* expression:getchar() != EOF; the value is */

int main()
{
	int c;
	
	c=getchar() != EOF;
	printf("%d\n",c);
	
	return 0;
}
