#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
 };
 int main()
 {
     struct node *head,*p,*q,*t,*u;
     int i,n,a;
     scanf("%d",&n);
     head=NULL;
     for(i=0;i<n;i++){
         p=(struct node *)malloc(sizeof(struct node));
         scanf("%d",&a);
         p->data=a;
         p->next=NULL;
         if(head==NULL)
             head=p;
         else
             q->next=p;
         q = p;
     }
     //输出链表
     t=head;
      while(t!=NULL){
          printf("%d ",t->data);
          t=t->next;
      }
      //释放链表
      t=head;
      u=t;
      while(t!=NULL){
          u=t->next;
          free(t);
          t=u;
      }
           
      return 0;
 }