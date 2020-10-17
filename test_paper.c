#include<stdio.h>
int main()
{
 int a[70],i=0,j;
 int sum=0;
 char y;
 printf("请输入任意个数，按回车键结束，统计求和\n");
 do 
 {
    scanf("%d",&a[i++]); 
}while((y=getchar()) != '\n');// 这里用来判断是否输入了回车
for(j=0;j<i;j++)
 sum += a[j];
printf("求和 = %d \n", sum); 
 return 0;
}