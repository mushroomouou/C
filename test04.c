#include <stdio.h>

int main(void)
{
    int num1,num2,max,min,r,s;; 
    printf("Please input your first number:"); scanf("%d",&num1);
    printf("Please input your second number:"); scanf("%d",&num2);
    max = num1 > num2 ? num1 : num2;
    min = (num1 + num2) - max;
    printf("Your greatest commom divisor is:");
    s = 0;
    while (s <= 0){
        r = max % min;
        if (r == 0){
            printf("%d",min);
            s ++;
            break;
        }
        max = min % r;
        if (max == 0){
            printf("%d",r);
            s ++;
            break;
        }
        min = r % max;
        if (min == 0){
            printf("%d",max);
            s ++;
            break;
            }
        }
    return 0; 

}