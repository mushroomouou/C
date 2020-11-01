#include <stdio.h>

int main(void)
{	int cycle = 0;
	int num;
	printf("请输入你的数字吧：");
	scanf("%d",&num);
	do{
		if (cycle % 2 == 0){
			printf("+");
			cycle ++;
			num --;
		} else {
			printf("-");
			cycle ++;
			num --;
		}
	} while (num > 0);
	return 0;
}

