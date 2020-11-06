#include <stdio.h>
#include <stdlib.h>
struct haha
{
    int balabala;
    struct haha *next;
};
int main()
{
    int n = 0;
    int toolman = 0;
    scanf("%d",&n);
    struct haha *head;
    struct haha *tool;
    do
    {
        struct haha *man = (struct haha*)malloc(sizeof(struct haha));
        scanf("%d",&(man->balabala));
        if (head == NULL)
        {
            head = man;
        }
        else
        {
            tool -> next = man;
        }
        tool = man;
        
    } while (toolman < n);
    return 0;
}