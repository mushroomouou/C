//统计元音字母个数;
#include <stdio.h>
#include <string.h>
#define STRING_AMOUNT 100
int main()
{
    int n = 0,j = 0,i = 0;
    char ch;
    char string_list[STRING_AMOUNT];
    gets(string_list);
    int a = 0, e = 0, s = 0, o = 0, u = 0;
    for (j = 0; string_list[j] != '\000';j ++){
 
            if (string_list[j] == 'a'){
                a ++;
            }else if (string_list[j] == 'e'){
                e ++;
            }else if (string_list[j] == 'i'){
                s ++;
            }else if (string_list[j] == 'o'){
                o ++;
            }else if (string_list[j] == 'u'){
                u ++;
            }
    }
    printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\n",a,e,s,o,u);
    printf('\n');
    
}