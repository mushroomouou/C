#include <stdio.h>

int main()
{
    int figureline = 0;
    int figurecolumn = 0;
    int left = 0;
    int right = 255;
    printf("现在依次输入你的像素矩阵的大小，以及被抹杀的颜色范围，注意只能是0到255之间的数值哦\n");
    scanf("%d %d %d %d",&figureline,&figurecolumn,&left,&right);
    int matrix_color[figureline][figurecolumn];
    int toolmanOne = 0;
    int toolmanTwo = 0;
    do
    {
        do
        {   
            scanf("%d",&matrix_color[toolmanOne][toolmanTwo]);
            if (matrix_color[toolmanOne][toolmanTwo] >= left && matrix_color[toolmanOne][toolmanTwo] <= right)
            {
                matrix_color[toolmanOne][toolmanTwo] = 000;
            }
            toolmanTwo ++;
        } while (toolmanTwo < figurecolumn);
        toolmanOne ++;
        toolmanTwo = 0;
    } while (toolmanOne < figureline);
    toolmanOne = 0;
    toolmanTwo = 0;
    do
    {
        do
        {
            if (matrix_color[toolmanOne][toolmanTwo] == 0)
            {
                printf("000 ");
            }
            else
            {
                printf("%d",matrix_color[toolmanOne][toolmanTwo]);
            }
            toolmanTwo ++;
        } while (toolmanTwo < figurecolumn);
        toolmanOne ++;
        toolmanTwo = 0;
        printf("\n");
    } while (toolmanOne < figureline);
    
    return 0; 
}