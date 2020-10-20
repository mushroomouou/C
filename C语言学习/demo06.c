#include <stdio.h>
int main()
{
	//计算复利。
	const double lilu = 0.033;
	double amount = 0,stack;
	int year = 0;
	int cycle ;
	printf("请输入您的本金：\n");
	scanf("%lf",&amount);
	stack = amount;
	printf("请问您是从那一年开始存储的 ：");
	scanf("%d",&year);
	cycle = 2020 - year;
	for (int i = 0; i < cycle ; i ++){
		amount *= (1 + lilu);
	}
	printf("您目前的润是%f",amount - stack);

	return 0;


}
