//青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
#include <stdio.h>
#define array 100
int main()
{   
    char ch1,ch2;
    int arraylist[array];
    int i = 0;
    int j = 0;
    int cycle,max,min,stack,result;
    do
    {
        do
        {
            scanf("%d",&arraylist[i]);
            j ++;
            i ++;
        } while ((ch2=getchar()) != '\n');
        // get max
        for  (cycle = 0; cycle < j-1 ; cycle ++){
            if (max <= arraylist[cycle]){
                max = arraylist[cycle];
            }
            printf("%d",arraylist[cycle]);

        }
        // get min
        for  (cycle = 0 ; cycle < j-1 ; cycle ++){
            if (min >= arraylist[cycle]){
                min = arraylist[cycle];
            }
        }
        // get average
        for (cycle = 0; cycle < j-1 ; cycle ++){
            stack += arraylist[cycle];
        }
        printf("%d\n",max);
        printf("%d\n",min);
        printf("%d\n",j);
        printf("%d\n",stack);
        printf("%f",(double)(stack - max - min)/j);

        
    } while (ch1=getchar() != EOF);
    return 0;
    
    
}