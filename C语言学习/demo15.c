#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	void *p;
	while ((p=malloc(100*1024*1024))){
		i ++;
	}
	printf("你分配了%d百MB的空间。",i);

	return 0;
	
}
