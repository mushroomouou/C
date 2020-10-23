#include <stdio.h>

int main()
{
	char a = 50;
	char *p = &a;
	printf("p = %p\n",p);
	printf("p = %p\n", *p);
	printf("&a = %p\n", &a);

	return 0 ;

}
