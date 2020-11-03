#include <stdio.h>

int main(void)
{
	int num1;
	int cycle = 0;
	int m;
	printf("請輸入你的數字：");scanf("%d",&num1);
	for (int i = 0; i < num1 ; i++){
		switch(cycle%10){
			case (0) :
				printf("1");
				cycle ++;
				break;
			case (1) :
				printf("2");
				cycle ++;
				break;
			case (2) :
				printf("3");
				cycle ++;
				break;
			case (3) :
				printf("4");
				cycle ++;
				break;
			case (4):
				printf("5");
				cycle ++;
				break;
			case (5) :
				printf("6");
				cycle ++;
				break;
			case (6) :
				printf("7");
				cycle ++;
				break;
			case (7) :
				printf("8");
				cycle ++;
				break;
			case (8) :
				printf("9");
				cycle ++;
				break;
 			case (9) :
				printf("0");
				cycle ++;
				break;

		}
	}
	return 0;
}

