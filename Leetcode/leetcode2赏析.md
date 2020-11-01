### Leetcode-2-两数之和
#### 题目：
> 给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照逆的方式存储的，并且它们的每个节点只能存储 一位 数字。
如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。
您可以假设除了数字 0 之外，这两个数都不会以 0 开头。
##### 我的思路：
> 我最开始想的是用两个数组去把给定链表的数值收集，同时把各个链表的长度记录下来到最后进行一个数组相应位的加和，再对所得的数组进行操作，由于位数数字和最大为18，所以就算是单个进位也不可能超过3，所以针对和数组进行取余%10如果说超过1则存储于一个tamp里面加到下一位，以此类推，结束时刻为数组走到尽头且取余数为0，则此时的result数组构建完毕。那么我们再创建链表来把数据填入，最后返回链表，想法还挺正常，就是使用的内存严重超过了预期，所以创建一个数组完全多余，这就有了解法一如下。
##### 解法一；
```c++
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *link,*temp,*current;
    link = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    link->next=NULL;
    link=temp;
    int carry=0; //进位数值
    int sum=0; //当前位的和
    //当l1,l2,或最后一轮计算完需进位数不为0
    while(l1!=NULL||l2!=NULL||carry>0){
        int l1_val=l1==NULL?0:l1->val; //l1当前位值,不存在用0补上
        int l2_val=l2==NULL?0:l2->val; //l2当前位值,不存在用0补上
        sum=l1_val+l2_val+carry; //当前位两数之和+上一位求和进位数
        carry=sum/10; //当前位求和需进位数
        sum=sum%10; //当前位之和
        //创建新链表
        current=(struct ListNode*)malloc(sizeof(struct ListNode));
        current->val=sum;
        temp->next=current;
        temp=current;
        //l1,l2指向下一节点，不存在则设为NULL
        l1=l1!=NULL?l1->next:NULL;
        l2=l2!=NULL?l2->next:NULL;
    }
    temp->next=NULL;//最后一项next设为NULL
    return link->next;//返回结果链表
}
```
> 赏析这个解法的第一个好处就是实现了我所想的无数组，直接在链表层面加和，其次这里的三目运算符用的极佳，`int l1_val= l1==NULL ? 0;l1->val;`这一段就直接做到 了我想的如果超过链表长度，而指针指空，无法得值，我这个老笨蛋想的就是使用数组 初始化为0随后再加，其实我完全看错了，这里一旦链表长起来，根本就没办法完美表示数字加和，而这里的双目运算就是如果指空就赋0，如果值不为空就指自己的值。往后面他的作除和取余也用得极佳，第一次作除得到的carry用到了下一次的sum上而sum取余又是本位数字，这样把sum存下，carry积累到下一波，只要carry大于0则可执行，就有进位。非常妙的解法。
##### 解法二(递归)：
```c++
int c=0;
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    if(l1==NULL && l2==NULL && c==0)return NULL;
    l1 = l1!=NULL ? (c += l1->val, l1->next) : l1;
    l2 = l2!=NULL ? (c += l2->val, l2->next) : l2;
    struct ListNode *cur = (struct ListNode *)malloc(sizeof(struct ListNode));
    cur->val = c%10;
    c /= 10;
    cur->next = addTwoNumbers(l1,l2);
    return cur;
}
```
* 赏析：
> 这个递归非常有意思，首先双目运算符中加和了两个执行命令，在满足解法一的赋值的同时也把链表后推加入了进去，使得代码更加简洁，我们还能学习到的是使用递归去构造一个链表`cur->next = addTwoNumbers(l1,l2);`这一段说实话很帅，其一我们得到了一个完整的链表，这个链表在所有东西都等于0的时候终止，这时候我们接受到的是第一句返回的NULL也就是说链表指向了空，那么这个表也就完全走完了。这里的进位也很有意思，虽然与上一个解法差不多，但这里使用了很多简化操作，也的的确确使得代码简化了不少。