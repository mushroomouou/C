#include <stdio.h>

int main()
{	int i = 0,cyc;
	int array[] = {1 , 2 , 3 , 4 , 5 , 6};
	cyc = sizeof(array)/sizeof(int);
	for (i = 0;  i < cyc ; i ++){
		printf("%2.d",array[i]);
	}
	return 0;

}
