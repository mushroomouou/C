#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// 心得体会：字符串数组的创建需要使用双星系统，这样我们就可以对每一个**p下面的每一个*p进行malloc创造空间，从而赋值.
// 同时我们还可以使用这两个函数来复制字符串 strcpy(现字符串，原字符串) stricmp(对两个字符串
// 的ASCII码精心比较，从而返回大于零小于零等于零的奇怪数字从而实现对字符串大小的比较哦！！！Cnice！！！)
const char uplevel[11] = "2020/10/31";
const char lowlevel[11] = "1820/10/31";
int main()
{
    int n = 0;
    scanf("%d",&n);
    char **people = (char **)malloc(n * sizeof(char *));
    char **birth = (char **)malloc(n * sizeof(char *));
    int toolman = 0;
    char **specialman = (char **)malloc(2 * sizeof(char *));
    int count = 0;
    char testmax[11] = "0000/00/00";
    char testmin[11] = "0000/00/00";
    do
    {   
        people[toolman] = (char *)malloc(11 * sizeof(char));
        birth[toolman] = (char *)malloc(11 * sizeof(char));
        scanf("%s %s",people[toolman],birth[toolman]);
        if (stricmp(uplevel,birth[toolman]) > 0 && stricmp(lowlevel,birth[toolman]) < 0)
        {
            count ++;
        }
        toolman ++;
    } while (toolman < n);
    strcpy(testmin,*people);
    for (toolman = 0; toolman < n; toolman ++)
    {
        if (stricmp(*birth,testmax) > 0)
        {
            strcpy(testmax,*people);
        }
        if (stricmp(*birth,testmin) < 0)
        {
            strcpy(testmin,*people);
        }
        birth ++;
        people ++;
    }
    printf("%d %s %s",count,testmax,testmin);

    return 0;
}