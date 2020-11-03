#include <stdio.h>

int main()
{
    int number = 0;
    scanf("%d",&number);
    int numberlist[3] = {0};
    char numberch[3];
    sprintf(numberch,"%d",number);
    for (int h = 0; h < 3; h ++)
    {
        numberlist[h] = (int)numberch[h] - 48;
    }
    if (numberlist[0] != 0)
    {
        while (1)
        {
            printf("B");
            numberlist[0] -= 1;
            if (numberlist[0] == 0)
            {
                break;
            }
        }
        
    }
    if (numberlist[1] != 0)
    {
        while (1)
        {
            printf("S");
            numberlist[1] -= 1;
            if (numberlist[1] == 0)
            {
                break;
            }
        }
        
    }
    for (int r = 0; r < numberlist[2]; r ++)
    {   
        int stack = r;
        printf("%d",stack + 1);
        if (stack + 1 == numberlist[2])
        {
            break;
        }
    }
    return 0;
}