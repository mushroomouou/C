#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define AMOUNT 999999
//统计各个位置上的数字多少，并按照升序排列输出统计结果。
//注意：！！！！不能在函数里面定义数组然后又把数组传出来，这样做的话会让数组在函数运行结束时候自动回收！！！出现大问题！！！！。
int numberlist[10] = {0};
void returnstr(int number,char stringnumber[])
{
    memset(stringnumber,'\0',AMOUNT);//字符串的前n个初始化为'\0'
    sprintf(stringnumber,"%d",number);

}
int* returnresult(char *string)
{   
    int *ptr;
    char *ptrstr = string;
    ptr = numberlist;
    int i = 0;
    int counts = 0;
    while (*string != '\000')
    {
        switch (string[i])
        {
        case 0:
            numberlist[0] += 1;
            counts ++;
            break;
        case '1':
            numberlist[1] += 1;
            counts ++;
            break;
        case '2':
            numberlist[2] += 1;
            counts ++;
            break;
        case '3':
            numberlist[3] += 1;
            counts ++;
            break;
        case '4':
            numberlist[4] += 1;
            counts ++;
            break;
        case '5':
            numberlist[5] += 1;
            counts ++;
            break;
        case '6':
            numberlist[6] += 1;
            counts ++;
            break;
        case '7':
            numberlist[7] += 1;
            counts ++;
            break;
        case '8':
            numberlist[8] += 1;
            counts ++;
            break;
        case '9':
            numberlist[9] += 1;
            counts ++;
            break;
        default:
            break;
        }
        string ++;

    }
    numberlist[0] = strlen(ptrstr) - counts;
    return ptr;
}
int main()
{
    int a = 0;
    scanf("%d",&a);
    char str[AMOUNT];
    returnstr(a,str);
    printf("%c",str);
    int *p = NULL;
    p = returnresult(str);
    for (int i = 0; i < 10 ; i ++)
    {
        if (*p != 0)
        {   
            int stack = *p;
            printf("%d : %d\n",i,*p);
            *p = stack;
        } 
        p ++;
    }
    return 0;
}