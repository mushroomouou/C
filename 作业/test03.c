#include <stdio.h>
#include <string.h>
#define AMOUNT 1000
int main()
{
	char str[AMOUNT];
	gets(str);
	int i = 0,j = 0;
	while(str[i] != '\0'){
		while (str[i] = str[i + 1]){
			j ++ ;
			i ++ ;
		}
		printf("%c%d",str[i],j);
		j = 0;
	}
	return 0;
}