#include <stdio.h>

int main()
{
    int cycle = 0;
    scanf("%d",&cycle);
    int numberlist[cycle][2];
    int toolman = 0;
    do
    {
        scanf("%d%d",&numberlist[toolman][0],&numberlist[toolman][1]);
        toolman ++;
    }while (toolman != cycle);
    for (int j = 0 ; j < cycle ; j ++)
    {
        if (numberlist[j][0] % numberlist[j][1] == 0)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
}