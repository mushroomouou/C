#include <stdio.h>
#include <time.h>
#include <stdlib.h> 
#define TIME 3
//C语言第22题,程序运行的时间； 
int plusfunction(int a,int b)
{
    return a + b ;
}
void  retruntime(int time,int *numbersize)
{   
    if (*numbersize == 0)
    {
        *numbersize = time % 3600;       
    }else if (* (numbersize + 1) == 0)
    {
        *(numbersize + 1) = (time - *numbersize * 3600)/60;
    }else if (* (numbersize + 2) == 0)
    {
        *(numbersize + 2) = time - *numbersize * 3600 - *(numbersize + 1) * 60;
    }
}
int main()
{
    int a = 0,b = 0;
    scanf("%d%d",&a,&b);
    int c1 = clock();
    int result = plusfunction(a,b);
    int c2 = clock();
    int result_time = (c2 -c1)/CLK_TCK;
    int *numberptr;
    numberptr = (int *)malloc(TIME *sizeof(int));
    *numberptr = 0;
    retruntime(result_time , numberptr);
    printf("%d:%d:%d\n",*numberptr,*(numberptr + 1),*(numberptr + 2));

    return 0;
}