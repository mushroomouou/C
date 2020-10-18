#include <stdio.h>

int main(void)
{	
	printf("這裏石頭剪刀步遊戲，你可以輸入0代表石頭，1代表剪刀，2代表布。");
	int choice;
	int number = 0;
	char loser ;
	printf("親輸入你的選擇吧！！");
	scanf("%d",choice);
	do {
		if (choice == 0){
			printf("你出了石頭\n");
			printf("但是很不巧，電腦出了布，You Lose！");
			number ++;
		}else if (choice == 1){
			printf("你出了剪刀\n");
			printf("但是你沒想到吧，爺我出了石頭,you trash");
			number ++;
		}else if (choice == 2){
			printf("你出了布\n");
			printf("但是你沒想到吧，你永遠不可能贏我，爺出了剪刀。Loser");
			number ++;
		}
		printf("想要退出嗎？  退出輸入------q");
		printf("不想退出直接回車！！！！！！！！！！！");
		scanf("%s",&loser);
	}	while (loser != "q");
	printf("憨憨，你玩了" + (char str[])number + "把才發現嗎，這遊戲可公平了！！！");

	return 0;

}

