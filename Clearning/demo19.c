#include <stdio.h>

int plus(int x,int y)
{
	return x + y;
}
int main(int argc,char *argv[])
{
	int x=0,y=0;
	printf("分别输入你的x与y\n");
	scanf("%d%d",&x,&y);
	printf("你的答案是: %d\n",plus(x,y));
	for (int i = 0;i < argc;i ++){
		printf("你的第 %d 个参数是 %s\n",i + 1, argv[i]);
	}

					
	return 0;
	
}
