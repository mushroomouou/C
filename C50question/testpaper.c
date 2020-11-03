#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *newStr;
char* returnstring(char *str)
{   
    int lenth = strlen(str);
    char *newStr = (char *)malloc((2*lenth + 1) * sizeof(char));
    memset(newStr,'\0',2*lenth + 1);
    int counts = 0;
    int j = 0;
    char *stack = newStr;
    for (int i = 0; i < lenth;)
    {
        for (j = i + 1; j < lenth; j++)
        {
            if (str[i] == str[j])
            {
                continue;
            }
            else
            {
                break;
            }
        }
        counts = j - i;
        sprintf(newStr,"%c%d",str[i],counts);
        newStr = newStr + 2;
        counts = 0;
        i = j;
    }
    if (strlen(stack) >= 2 * lenth)
    {
        stack = str;
    }
    return stack;
}
int main()
{
    char *s = "abcdferghy";
    char *target;
    target = returnstring(s);
    printf("%s",target);
    return 0;
}