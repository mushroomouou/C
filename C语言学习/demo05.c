#include <stdio.h>

int main()
{
	int hour1 , minute1;
	int hour2 , minute2;
	int change;
	scanf("%d %d",&hour1,&minute1);
	scanf("%d %d",&hour2,&minute2);
	change = (hour1 * 60 + minute1) - (minute2 + hour2 * 60);
	printf("时间差是%d小时,%d分钟。",change/60,change%60);

	return 0;
}
