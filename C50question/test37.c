#include <stdio.h>
#include <stdlib.h>
int main()
{   
    int N = 0;
    printf("你有几个学生呢？\n");
    scanf("%d",&N);
    char **examnumber = (char **)malloc(N * sizeof(char *));
    int sitnumber[N];
    int asknumber[N];
    //输入
    int toolman = 0;
    do
    {   
        examnumber[toolman] = (char *)malloc(20 * sizeof(char)); 
        scanf("%s %d %d",examnumber[toolman],&asknumber[toolman],&sitnumber[toolman]);
        toolman ++;
    } while (toolman < N);
    while (1)
    {
        printf("请输入你要查询的座机号码:\n");
        int askingnumber = 0;
        scanf("%d",&askingnumber);
        if (askingnumber > N)
        {
            printf("error!!\n");
            return 0;
        }
        printf("======================\n");
        printf("结果是:");
        for (int j = 0; j < N; j ++)
        {
            if (askingnumber == asknumber[j])
            {
                printf("%s %d\n",examnumber[j],sitnumber[j]);
            }
        }
        printf("======================\n");
        printf("\n");
        printf("\n");
        printf("你还想查询吗？\n");
        printf("继续查询-------------------------1\n");
        printf("退出-------------------------0\n");
        int select = 1;
        scanf("%d",&select);
        if (select == 0)
        {
            return 0;
        }
    }
}