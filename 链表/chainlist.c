// 这个链表不太好搞，毕竟第一次，看看最近学习的效果咋样，算是个考验啦。
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct mountains{
    int hights ;
    struct mountains *next;};
// 这个函数是管输入和链表创建的。
struct mountains* inputnumber(void)
{   

    char ch;
    int hight = 0;
    //这里创建一个头指针;
    struct mountains *head ;
    head = NULL;
    //这里是一个结束指针
    struct mountains *end ;
    end = NULL;
    //这里是后面的中间node
    struct mountains *haha ; 
    struct mountains *r_real;
    do
    {   
        
        haha = (struct mountains * )malloc(sizeof(struct mountains));
        scanf("%d",&hight);
        haha -> hights = hight;
        if (head==NULL){
            head = haha;
        }else{
            r_real -> next= haha; //其实这一步就是在把那个装箱赋给一个实际用的车箱，
        }
        r_real  = haha ;//与上面对应的是让这个
        
        
    } while (ch=getchar() != '\n');
    return  head;
}
//这个函数是管元素遍历的;
void print(struct mountains *mushroom){
    while (mushroom != NULL)
    {
        printf("%4.d",mushroom -> hights);
        mushroom = mushroom -> next;
    }
    
}
//这个函数是管在制定位置插入元素的。
//我觉得这个函数是无返回值类型，但参数还是得是结构体指针参数，以及元素的数字及其位置。
struct mountains* scrip(struct mountains *mushroom, int location , int hights )
{
    struct mountains *s ;
    struct mountains *stack;
    stack = mushroom;
    s = (struct mountains *)malloc(sizeof(struct mountains));
    s -> hights = hights;
    int i = 1;
    while (mushroom != NULL)
    {
        i += 1;
        if (location == 1){
            s -> next = mushroom;
            break;
        }
        if (i == location){
            s -> next = mushroom -> next;
            mushroom -> next = s;
        }
        mushroom = mushroom -> next;
    }
    if (i == 1){
        return s;
    }
    return stack;
}
//这里时delet节点的函数那么，返回值类型仍然是一个简简单单的struct指针类型，那么我们的参数为location，具体位置以及，链表地址。
struct mountains * delet(struct mountains *mushroom , int location){
    int i = 1;
    struct mountains *p;
    p = mushroom;
    while (mushroom != NULL)
    {   
        i += 1;
        if (location == 1){
            p = p -> next;
            break;
        }else if  ( i == location)
        {
            mushroom -> next = (mushroom -> next) -> next;
            break;
        }
        mushroom = mushroom -> next ; 
    }
    return p;
    
}
//这里是函数的清理内存;
void clean(struct mountains *mushroom){
    struct mountains *toolman;
    while (mushroom != NULL){
        toolman = mushroom -> next;
        free(mushroom);
        mushroom = toolman;
    }
}
int main()
{   
    struct mountains * mushroom;
    //主程序必须具有极强的互动性（折磨能力），那么必须循环啊。
    while (true){
        int i = 0 , secert = 0;
        int j = 0 , m = 0;
        printf("\n你想干嘛？\n");
        printf("输入数据请按---------- 1 \n");
        printf("插入数据请按---------- 2 \n");
        printf("删除数据请按---------- 3 \n");
        printf("清理缓存请按---------- 4 \n");
        printf("遍历链表请按---------- 5 \n");
        printf("退出请按------------  -1 \n");
        scanf("%d",&i);
        switch (i)
        {
        case 1:
            mushroom = inputnumber();
            break;
        case 2:
            printf("你想插入到那个位置！\n");
            scanf("%d",&j);
            printf("你想插入那一个数呢：\n");
            scanf("%d",&m);
            mushroom = scrip(mushroom,j,m);
            print(mushroom);
            break;
        case 3:
            printf("你想删除那一个元素，请输入该元素的位置：");
            int location = 0;
            scanf("%d", &location);
            mushroom = delet(mushroom,location);
            print(mushroom);
            break;
        case 5:
            print(mushroom);
            break;
        case 4:
            clean(mushroom);
            break;
        case -1:
            return 0;
            break;
        default:
            break;
        secert ++;
        if (secert==5){
            printf("测测就行了，一直测我怪不好意思的！\n");
        }
        if (secert==6){
            printf("别公开处刑我了，我太难受了！");
        }
        if (secert==7){
            printf("害````````");
        }
        }
    }
    return 0;
}