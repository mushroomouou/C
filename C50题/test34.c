#include <stdio.h>
int main(void) 
{
	int count1 = 0, count2 = 0, i, n;
	int a1, a2, b1, b2;
	scanf("%d", &n);
	for (i = 0; i < n; i++) 
    {
		scanf_s("%d %d %d %d", &a1, &a2, &b1, &b2);
		if (a2 == a1 + b1 && b2 != a1 + b1) 
        {
			count2++;
		}
		else if (b2 == a1 + b1 && a2 != a1 + b1) 
        {
			count1++;
		}
	}
	printf("%d %d", count1, count2);
	return 0;
}