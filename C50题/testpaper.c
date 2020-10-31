#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *p[5];
    for (int i = 0 ; i < 5 ; i ++)
    {
        printf("0x%0xp\n",&p[i]);
    }
    int two_demension[2][2] = {{1,2},{2,3}};
    printf("=========================================\n");
    for (int j = 0 ; j < 2; j ++)
    {
        for (int m = 0 ; m < 2 ; m ++)
        {
            printf("0x%0xp\n",&two_demension[j][m]);
        }
    }
    return 0;
}