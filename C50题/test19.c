#include <stdio.h>
#include <math.h>
//给定一些数据的实部与虚部。计算模糊值，找到最大值，直接就一个数组然后所有模糊值，一遍遍历，一次得出最大值。
int main()
{
    char ch;
    int i = 0;
    int a = 0, b = 0,result = 0;
    double haha[1000] = {0};
    double max = 0;
    printf("你随时觉得够了就输入q来退出。");
    while(ch=getchar() != 'q'){
        scanf("%d%d",&a,&b);
        result = (double)((a*a + b*b));
        haha[i] = sqrt(result);
        i ++;
    }

    for (int j = 0; j < i ; j ++){
        if (max < haha[j]){
            max = haha[j];
        }
    }
    printf("%.2lf",max);
    return 0;
}