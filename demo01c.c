#include <stdio.h>

int main(void)
{
	int num1 , num2 , max;
	printf("Please input your number!");
	printf("Your first number is :"); scanf("%d",&num1);
	printf("Your next number is "); scanf("%d", &num2);
	
	if (num1 == num2)
	{
		printf("These two number is equal!!!\n");
		printf("You don't need to compare them!!!\n");
		return 0;
	}
	
	max = (num1 > num2) ? num1 : num2;
	printf("Your max is : %d", max );
	
	return 0;

	
}
