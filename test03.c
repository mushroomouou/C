#include <stdio.h>

int main(void)
{
	int cycle,number,n,i,m,j,stack,h,o,s;
	printf("please input your number!");scanf("%d",&cycle);
	stack = cycle ; number = 0; s = 3;
	for (i=0;i<=cycle;i++){
		if (i <= (cycle + 1)/2)
		{
			for (m = 0 ; m < number ; m ++){
				printf(" ");
			}
			for (j = 0 ; j < stack ; j ++){
				printf("*");
			}
			stack -= 2;
			number += 1;
			if (stack == -1){
				continue;
			}else if (stack != -1){
					printf("\n");
			}
		}
		else if (i > (cycle + 1)/2 ){
			for (o = 0 ; o < (number - 3); o++){
				printf(" ");
			}
			for (h = 0; h < s ; h ++){
				printf("*");
			}
			number -= 1;
			s += 2;
			printf("\n");
			if (s == cycle + 2)
			{
				break;
			}
		}
	}
	return 0;
}