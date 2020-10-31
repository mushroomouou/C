#include <stdio.h>
#include <string.h>
/*
心得体会：1.当使用字符串的strlen函数时我推荐使用char []定义方法，当使用char *str代表字符串时我们要使用str != NULL来判断打印结束。
          2.字符1强制转换成ASCII码时'1'的值为49，'0'的值为48，所以明白了吗？？我们直接使用强制转换来有点想Hash的感觉取`（int）'1'`来表示真1；
          3.
*/
char str1[100];
char str2[100];

void printfresult(int number)
{
    sprintf(str2,"%d",number);
    for (int j = 0 ; j < strlen(str2) ; j ++)
    {
        switch (str2[j]){
            case '0':
                printf("ling ");
                break;
            case '1':
                printf("yi ");
                break;
            case '2':
                printf("er ");
                break;
            case '3':
                printf("san ");
                break;
            case '4':
                printf("si ");
                break;
            case '5':
                printf("wu ");
                break;
            case '6':
                printf("liu ");
                break;
            case '7':
                printf("qi ");
                break;
            case '8':
                printf("ba ");
                break;
            case '9':
                printf("jiu ");
                break;
            default:
                break;
    }    }
}
int main()
{
    int a = 0;
    int sum = 0;
    printf("请输入你的数字：\n");
    gets(str1);
    for (int i = 0; i < strlen(str1); i ++)
    {
        sum += (int)(str1[i]) - 48;
    }
    printfresult(sum);
    return 0;
}