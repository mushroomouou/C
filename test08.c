//青年歌手大奖赛中，评委会给参赛选手打分。选手得分规则为去掉一个最高分和一个最低分，然后计算平均得分，请编程输出某选手的得分。
#include <stdio.h>
#define AMOUNT 100
int main()
{
    int number = 0;
    int arraylist[AMOUNT];
    char  ch1,ch2;
    int i ; 
    int max = 0 ,min = arraylist[0];
    int stack = 0;
    do
    {
        scanf("%d",&number);
        do
        {
            scanf("%d",&arraylist[i]);
            i ++;
        } while (ch2=getchar() != '\n');
        for (i = 0; i < number ; i ++){
            if ( max < arraylist[i]){
                max = arraylist[i];
            }
        }
        for (i = 0 ; i < number ; i ++){
            if (min > arraylist[i]){
                min = arraylist[i];
            }
        }
        for (i = 0; i < number ; i ++){
            stack += arraylist[i];
        }
        
        printf("%f\n",(double)(stack - max - min)/(number -2));
        stack = 0;
    } while (ch1=getchar() != EOF);
    
}