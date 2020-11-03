#include <stdio.h>
//复数乘法：
int main()
{
    double a1 = 0.0, b1 = 0.0, a2 = 0.0, b2 = 0.0;
    double resulta = 0.0, resultb = 0.0;
    scanf("%lf%lf%lf%lf",&a1,&b1,&a2,&b2);
    resulta = a1*a2 - b1*b2;
    resultb = a1*b2 + a2*b1;
    printf("%f+%fi",resulta,resultb);

    return 0;
}