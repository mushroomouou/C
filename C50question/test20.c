#include <stdio.h>
//求取多项式的和。
int main()
{
    printf("你想算前几位：\n");
    int i = 0;
    double result = 0.0;
    double stack = 0.0;
    scanf("%d",&i);
    for (int j = 1; j <= i; j ++){
        if (j % 2 == 0){
            result =(double) (-1)/j;
        }else if (j % 2 == 1){
            result = (double)1/j;
        }
        stack += result;
    }
    printf("结果是：%lf.\n",stack);
    return 0;
}
