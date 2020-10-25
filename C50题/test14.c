#include<stdio.h>
#define N 20
int main()
{
    int n[N],i,j,x[N][100],min,k,t,p,m;
    j=-1;
    //使用n[]这个数组来存放每组的数据的个数，方便的是以后的打印。
    printf("Input:\n");
    while(scanf("%d",&n[++j])!=EOF&&n[j]!=0)
    {
        for(i=0;i<n[j];i++)
        scanf("%d",&x[j][i]);
    }
    m=j;
    printf("Output:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n[i];j++)
        {
        min=x[i][0];
        if(min>x[i][j])
        {
        min=x[i][j];
        k=j;
        }
        }
        t=x[i][0];
        x[i][0]=x[i][k];
        x[i][k]=t;
        for(p=0;p<n[i];p++)
        printf("%d ",x[i][p]);
        printf("\n");   
    }
    return 0;
}