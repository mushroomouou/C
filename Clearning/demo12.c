#include <stdio.h>

int main()
{
	int ac[] =  {0,1,2,3,4,5,6,7,8,9};
	int  *pch = ac;
	printf("pch =  %p\n",pch );
	printf("pch + 1 = %p\n", pch + 1);
	printf("*pch[0] = %d\n",pch[4]);

	return 0;
}
