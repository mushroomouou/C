#include <stdio.h>

int main()
{
	char a = 50;
	char *p1 = &a;
	char *p2 = p1;
	char *p3 = &p1;
	printf("&a = %p\n",&a);
	printf("&p1 = %p\n",p1);
	printf("&p2 = %p\n",p2);
	printf("%d %d %d ",a,*p1,*p2);
	printf("&p3 = %p\n",p3);
	return 0;
}
