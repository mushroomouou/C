#include <stdio.h>

int main()
{
    int n = 0;
    scanf("%d",&n);
    int list[n];
    int i = 0;
    while(i != n)
    {
        scanf("%d",&list[i]);
        i ++;
    }
    for (i = 0 ; i < n ; i ++){
        printf("%c",list[i]);
    }
    return 0;
}