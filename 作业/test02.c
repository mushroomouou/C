#include <stdio.h>
//判断输入的数是不是水仙花数字.
int main()
{	
while (1){
	int number = 0;
	int hun = 0;
	int ten = 0;
	int least = 0;
	printf("请输入一个三位数数字，注意是三位数！！：\n");
	scanf("%d",&number);
	if (number > 999 && number < 100){
		printf("别开玩笑！！请输入一个两位数好吗？？");
	}else {
	hun = number / 100;
	ten = (number - hun*100)/10;
	least = (number - hun*100 - ten*10);
	if (hun*hun*hun + ten*ten*ten + least*least*least == number){
		printf("没错没错这就是你要的水仙花数字。。。\n");
	}else{
		printf("I am sorry ,这不是水仙花数字哦！\n");
	}
	return 0;
	}
}
}
