#include <stdio.h>
//打印第多少个到第多少个素数；；

int main()
{
    int x;
    int s = 0,c = 0; // if ???? \n
    int prime[1000] = {0};
    int begin,last;
    printf("请输入你的起始素数位与结尾素数位。\n");
    scanf("%d%d",&begin,&last);
	for (x = 2; x <= 100; x++)
	{
		int i; //from zero to print number !
		int number=1; //initialize you selective number !!!
		for (i = 2; i < x; i++)
		{
			if (x%i==0)
			{
				number = 0;
				break; //wWhen reminader equals to zero , then break  , There is no need to inspect another number in this list .
				//出现有可以余的就是得break、。
			}
		}
		if (number == 1) // This format of number is like the usage in python !!! boolean!!!!
		{
			prime[c] = x;
            s ++;
            c ++;
		}
    }
	for (int j = begin -1 ; j < last ; j ++){
        printf("%4.d",prime[j]);
    }
    return 0;
}