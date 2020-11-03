#include <stdio.h>
#include <stdlib.h>
int main()
{
    int ASCII[128] = {0};
    int max = 0;
    int ch = 0;
    char *p = (char *)malloc(1000 * sizeof(char));
    printf("请输入你的字符串吧,我等等会帮你统计的！！！\n");
    scanf("%s",p);
    for (int toolman = 0; p[toolman] != '\0'; toolman ++)
    {
        ASCII[(int)p[toolman]] ++;
    }
    for (int begin = 65; begin < 91; begin ++)
    {
        if (ASCII[begin] + ASCII[begin + 32] > max)
        {
            max = ASCII[begin] + ASCII[begin + 32];
            ch = begin;
        }
    }
    printf("%c %d",(char)ch,max);
}