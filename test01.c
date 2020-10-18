#include <stdio.h>

int main(void)
{
	int num1,num2,num3,stack,max,addition,min;
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	stack = (num1 >= num2) ? num1 : num2;
	max = (stack >= num3) ? stack : num3;
	min = (num1 + num2 + num3) - (stack + max);
	addition = (num1 + num2 +num3) - max;
	if (addition > max){
		if(num1 == num2 && num2 == num3){
			printf("這是個正三角形！！\a");
			printf("1");
		}else if (max*max == stack*stack + min*min){
			printf("這是個直角三角形！！\a");
			printf("直角！！");
		}else if((max == stack)||(max == min)||(min == stack)){
			printf("等腰啊，這三角等腰\a");
			printf("2");

		}else{
			printf("這就是一個三角形，有啥好看的！！\a");
			printf("3");
		}
	}else{
		printf("就這，不是三角形");
		printf("0");
	}
	return 0;

}
