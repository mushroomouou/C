#include <stdio.h>
#include <stdlib.h>
//自己当电脑？？要玩就真随机的van
int main()
{
    int initmoney = 0;
    printf("你想以多少的本金开始游戏！！\n");
    scanf("%d",&initmoney);
    int stack = initmoney;
    char ch;
    int counts = 0;
    double avarge;
    printf("现在游戏开始咯！！，你可以按q退出！如果赌不下去了！！\n");
    do
    {
        int numberOne = rand() % 10;
        int numberTwo = rand() % 10;
        int select = numberOne > numberTwo ? 1:0;
        int chooseOne = 0;
        int chooseTwo = 0;
        printf("你觉实际大小情况是什么样的呢？\n");
        printf("输入---------------------0表示小\n");
        printf("输入---------------------1表示大\n");
        scanf("%d %d",&chooseOne,&chooseTwo);
        if (chooseTwo > initmoney)
        {
            printf("你就这？？ 没钱赌个锤子？？？\n爷把你程序给你扬了!!\n");
            return 0;
        }
        if (chooseOne == select)
        {
            initmoney += chooseTwo;
            printf("收益%d元\n",chooseTwo);
        }
        else 
        {
            initmoney -= chooseTwo;
            printf("亏损%d元\n",chooseTwo);
        }
        counts += 1;       
        printf("你现在还有%d元\n",initmoney);
    } while (ch=getchar() != 'q');
    avarge = (double) (initmoney - stack) / counts;
    printf("你一共玩了%d把,均场收益(亏损)%f\n");
    return 0;
}