
#include <stdio.h>
 
int main(void)
{
	int x;
    int s = 0; // if ???? \n
	for (x = 2; x <= 100; x++)
	{
		int i; //from zero to print number !
		int number=1; //initialize you selective number !!!
		for (i = 2; i < x; i++)
		{
			if (x%i==0)
			{
				number = 0;
				break; //wWhen reminader equals to zero , then break  , There is no need to inspect another number in this list .
			}
		}
		if (number == 1) // This format of number is like the usage in python !!! boolean!!!!
		{
			printf("%d ", x);
            s ++;
            if (s % 5 == 0 && s != 0){
                printf("\n");
            }
		}
        
	}
	return 0;
}
