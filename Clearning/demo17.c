#include <stdio.h>

enum colors {red , yellow , blue };
void printfcolors (enum colors c);

int main()
{
	enum colors i = 0 ;
	printf("请输入你想看到的颜色呢：\n");
	scanf("%d",&i);
	printfcolors(i);

	return 0;
}

void printfcolors(enum colors c){
	printf("是%d色呢\n",c);
}
