#include <stdio.h>
#include <stdlib.h>
//在给定区间放置n组三个为一组的数字。

int main()
{
    // int i = 0;
    // int *p = &i;
    // int n = 100;
    // p = (int)malloc(n *sizeof(int));
    // *(p + 1) = 10;
    // p = p + 1 ;
    // printf("%d",*p);
    //动态数组可以这么建立;
    //那么动态二位数组呢。
    int n = 0,cycle = 0,j = 0;
    printf("你要测几组数据呢：\n");
    scanf("%d",&n);
    int list[n][3];
    while (cycle != n){
        while (j < 3){
            scanf("%d",&list[cycle][j]);
            j ++;
        }
        j = 0;
        cycle ++;
    }
    for (j = 0 ; j < n ; j ++){
        if (list[j][0] + list[j][1] > list[j][2]){
            printf("Case #%d: %s\n",j+1,"true");
        }else
        {
            printf("Case #%d: %s\n",j+1,"false");
        }
    }
    return 0;   
}