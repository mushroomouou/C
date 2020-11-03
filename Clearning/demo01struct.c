#include <stdio.h>

struct day{
	int year;
	int month;
	int day;
}date;

int main()
{
	struct day today = {2020,10,23};
	struct day today2 = today;
	printf("今天的日期是：%i/%i/%i",today2.year,today2.month,today2.day);

	return 0;
	
}
