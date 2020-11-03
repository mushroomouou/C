#include <stdio.h>
int returnmaxyue(int number_one , int number_two)
{
    if (number_one % number_two == 0)
    {
        return number_two;
    }else{
        int tamp = number_one % number_two;
        number_one = number_two;
        number_two = tamp;
        returnmaxyue(number_one,number_two);
    }
}
//最大公倍数
int main()
{
    //输入两个number；
    int number_one = 0;
    int number_two = 0;
    printf("请输入第一个number:\n");
    scanf("%d",&number_one);
    printf("请输入第二个number：\n");
    scanf("%d",&number_two);
    int mult = number_one * number_two;
    if (number_two % number_one == 0)
    {   
        printf("结果是:\n");
        printf("%d",number_two);
        return 0;
    }
    else if (number_one % number_two == 0)
    {   
        printf("结果是:\n");
        printf("%d",number_one);
        return 0;
    }
    // 现在求最大公约数.
    int max = returnmaxyue(number_one, number_two);
    int maxnumber = mult / max ; 
    printf("结果是:\n%d",maxnumber);
    return 0;
}