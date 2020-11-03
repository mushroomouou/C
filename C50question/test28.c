#include <stdio.h>
#include <string.h>
int main()
{   
    printf("现在开始输入数据吧：");
    char p[10000];
    memset(p,'\0',10000);
    int j = 0;
    int stack = 0;
    gets(p); 
    for (int cycle = 0; p[cycle] != '\0'; cycle ++)
    {
        if ((int)p[cycle] >= 48 && (int)p[cycle] <= 57 )
        {
            stack ++;
        }
    }
    printf("%d\n",stack);

    return 0;
}