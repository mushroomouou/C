#include <stdio.h>

int main()
{   
    int cycle = 0;
    scanf("%d",&cycle);
    double numberlist[cycle];
    char ch;
    int i = 0;
    int max = 0;
    do
    {   
        scanf("%lf",&numberlist[i]);
        i ++;
    } while (ch=getchar() != '\n');
    for (int s = 0 ; s < cycle ; s ++)
    {
        if (numberlist[s] > max)
        {
            max = numberlist[s];
        }
    }
    printf("%d",max);
    return 0;
}