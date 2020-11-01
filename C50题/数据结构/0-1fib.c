#include <stdio.h>

int fib1(int n)
{
    if (n <= 1)
    {
        return n;
    }
    return fib1(n-1) + fib1(n-2);
}
int fib2(int n)
{
    if (n <= 1)
    {
        return n;
    }
    int begin = 0, next = 1,result;
    for (int i = 0 ; i < n - 1 ; i ++)
    {
        result = begin + next;
        begin = result + next;
        next = result + begin;
    }
    return next;
}
int main()
{
    printf("%d",fib2(64));
    return 0;
}
//当计算的n大起来后计算非常复杂，计算次数非常多。
//这里的第二种计算方式就简单很多，不是呈现指数级别的递增，而是呈现线性增加，所以对我们电脑非常友好！
