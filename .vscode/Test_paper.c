#include<stdio.h>
#include<stdlib.h>
int main()
{
    #include<stdio.h>
#include<stdlib.h>
 
int main()
{
    int a[2][3];
    int i,j;
    printf("请输入一个2行3列的矩阵:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
     
    printf("\n您输入的矩阵是：\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
}