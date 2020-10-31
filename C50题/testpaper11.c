#include <stdio.h>

int main()
{
    char *p1;
    int *p2;
    int *p3 = 0x111;
    p1 = p3;
    p2 = p3;
    printf("%p\n%p\n%p",p1 + 1, p2 + 1, p3);
}