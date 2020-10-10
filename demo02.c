#include <stdio.h>

int main(void)
{
	int choice = 0;
	int number = 0;
	int cycle_ = 0;
	int num = 0;
	do {
		printf("请输入数字：\n");
		scanf("%d",&number);
		num += number;
		cycle_ += 1;
		printf("你想继续🏇  [是---0/否---9]");
		scanf("%d", &choice);
	} while(choice == 0);

	printf("这几个数的平均为：\a");
	printf("%f",(double)number/cycle_);
	return 0;
}
