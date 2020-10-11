#include <stdio.h>

int main(void)
{
	int sub1,sub2;
	printf("請輸入第一門功課的成績：\n");
	scanf("%d",&sub1);
	printf("那麼再輸入第二們功課的成績：\n");
	scanf("%d",&sub2);
	if ((sub1 >= 60)&&(sub2 >= 60)){
		printf("it is pass.");
	}else if ((sub1 < 60&&sub1 > 0)||(sub2 < 60&&sub2 > 0)){
		printf("it is not pass.");
	}else if (((sub1 < 0)||(sub1 > 100))||((sub2 < 0)||(sub2 > 100))){
		printf("it is error.");
	}
	return 0;
}
