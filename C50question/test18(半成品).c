#include <stdio.h>
//最大子矩阵;首先定义一个二维数组，两个参数，以及子矩阵的参数多少行多少列。
int main()
{   
    int line = 0,column = 0,line_big = 0, column_big = 0;
    int i = 0, j = 0;
    char y;
    printf("你希望你的子矩阵多大呢：\n");
    printf("请输入行数：\n");
    scanf("%d",&line);
    printf("列数呢：\n");
    scanf("%d",&column);
    printf("现在输入你的大矩阵：\n");
    printf("行数：\n");
    scanf("%d",&line_big);
    printf("列数呢:\n");
    scanf("%d",&column_big);
    printf("现在开始输入你的矩阵吧：\n");
    int matrix1[line_big][column_big];
    do
    {
        do
        {
            scanf("%d",&matrix1[i][j]);
            j ++;
        } while ((y=getchar()) != '\n');
        i ++;
        j = 0;
    } while (i < line_big);
    
    return 0;
}