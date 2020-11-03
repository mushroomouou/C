#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//33 ~ 47 为! 到 / 48 ~ 57为数字  58 ~ 64 为特殊字符 91 ~ 96 为特殊字符  97 ~ 122 为小写字母 65 到 90 为大写字母
int main()
{   
    int toolMan = 0;
    int safenumber = 0;
    int safespecial = 0;
    int safeup = 0;
    int safelow = 0;
    int counts = 0;
    printf("输入一个8到16位的密码！！把各种可能的方式都用上！\n");
    char *p = (char *)malloc(17 * sizeof(char));
    scanf("%s",p);
    do
    {
        counts ++;
        toolMan ++;
    } while (p[toolMan] != '\0');
    
    if (!(counts > 8 && counts < 16))
    {
        printf("不合乎规范，拜拜！！\n");
        return 0;
    }
    for (toolMan = 0; p[toolMan] != '\0'; toolMan ++)
    {   

        if ((int)p[toolMan] >= 48 && (int)p[toolMan] <= 57 && (safenumber != 1))
        {
            safenumber = 1;
        }
        if ((((int)p[toolMan] >= 33 && (int)p[toolMan] <= 47) || ((int)p[toolMan] >= 58 && (int)p[toolMan] <= 64) || ((int)p[toolMan] >= 91 && (int)p[toolMan] <= 96)) && safespecial != 1)
        {
            safespecial = 1;
        }
        if ((int)p[toolMan] >= 97 && (int)p[toolMan] <= 122 && safeup != 1)
        {
            safeup = 1;
        }
        if ((int)p[toolMan] >= 65 && (int)p[toolMan] <= 90 && safelow != 1)
        {
            safelow = 1;
        }
    }   
    if (safelow == 1 && safenumber == 1 && safespecial == 1 && safelow == 1)
    {
            printf("好密码！！就这么设置准没错！！");
    }
        else 
    {
            printf("还不够好哦！！！你看看你密码都设不好！！");
    }
    return 0;
}