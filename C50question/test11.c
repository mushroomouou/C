#include <stdio.h>
#define AMOUNT_N 100000
#define AMOUNT_M 10
//寻找大富翁：镇上有n个人请你找到镇上的前m个大富翁并按照从大到小的顺序打印。
//分析：有俩参数，一个人数，其实人数里面还有人的财富。给爷用指针强迫自己使用指针。
//这里是输入部分传入的参数为人的财富值n
void inputwealth(int n,int *p){
    int i = 0;
    char ch;
    printf("请输入数据吧：\n");
    while ( i < n){
        scanf("%d",&p[i]);
        i ++;
    }
}
//这里将是对排序的研究：
void returnlist(int m,int p[],int n){
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j ++){
            if(p[i] < p[j+i]){
                int stack = 0;
                stack = p[i];
                p[i] = p[j+i];
                p[j+i] = stack;
            }
        }
    }
}
int main()
{   
    int wealth[AMOUNT_N] = {0};
    int *ptr = wealth;
    int n,m;
    printf("亲输入你想测试你们镇上有多少人：\n");
    scanf("%d",&n);
    printf("那你想要找几个大富翁呢，注意只能找10个以内:\n");
    scanf("%d",&m);
    inputwealth(n,ptr);
    printf("这%d个大富翁的财富值是:\n",m);
    returnlist(m,wealth,n);
    for (int c = 0; c < m; c ++){
        printf("%4.d",wealth[c]);
    }
    return 0;
}