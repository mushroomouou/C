#include <stdio.h>
// 9 X 9 LIST
int main(void)
{
    int i = 1, v = 1;
    for (i = 1;i <= 9 ; i ++){
        for (v = 1; v <= 9 ;v ++){
            int result = i * v ;
            printf("%4d",result);
        }
        printf("\n");
    }
    return 0;
}