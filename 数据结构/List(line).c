#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MaxLength 1000
typedef struct
{
    int numberList[MaxLength];
    int length;
} NumberList;

// 初始化一个线性表。
void InitList(NumberList *L)
{
    L = (NumberList *)malloc(sizeof(NumberList));
}
//删除一个整表。
void DeletList(NumberList *L)
{
    free(L);
}
//判断是否为空表。
bool ListEmpty(NumberList *L)
{
    if (L -> length > 0) return true;
    else return false;
}