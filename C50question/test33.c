#include <stdio.h>

int main()
{
    int number = 0;
    char ch;
    scanf("%d %c",&number,&ch);
    for (int j = 0; j < number; j ++)
    {
        printf("%c",ch);
    }
    printf("\n");
    double nu = number * 0.5;
    for (int j = 0; j < nu - 2; j ++)
    {
        for (int i = 0; i < number; i ++)
        {
            if (i == 0 || i == number - 1)
            {
                printf("%c",ch);
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for (int j = 0; j < number; j ++)
    {
        printf("%c",ch);
    }
    return 0;
}