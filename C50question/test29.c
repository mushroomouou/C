#include <stdio.h>
#include <math.h>

//给定 N 个非 0 的个位数字，用其中任意 2 个数字都可以组
//合成 1 个 2 位的数字。要求所有可能组合出来的 2 位数字的
//和。例如给定 2、5、8，则可以组合出：25、28、52、58、82、85，它们的和为330。
//组合数之和，取非自己的数一个
int main()
{
    int nums[10] = {0};
    int cycle = 0;
    char ch;
    int result = 0;
    do
    {
        scanf("%d",&nums[cycle]);
        cycle ++;
    } while(ch = getchar() != '\n');
    //接下来求出所有组合数的和
    for (int j = 0; j < cycle ; j ++)
    {
        result += nums[j] * 11;
    }
    result = 2 * result;
    printf("%d",result);
}