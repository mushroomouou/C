#include <stdio.h>
static int days = 0;
int returndays(int year,int month);
int main(void){
    int year = 0 , month = 0,day = 0;
    int result = 0;
    char haha1,haha2;
    scanf("%d%c%d%c%d",&year,&haha1,&month,&haha2,&day);
    result = day + returndays(year,month);
    printf("Today is the %d day in this year!\n",result);

    return 0;
}
int returndays(int year,int month)
{   
    char ch;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        ch = 't';
    }
    switch (month)
    {
    case 1:
        days += 31;
        break;
    case 2:
        if (ch == 't'){
            days += 29;
        }
        else{
            days += 28;
        }
        break;
    case 3:
        days += 31;
        break;
    case 4:
        days += 30;
        break;
    case 5:
        days += 31;
        break;
    case 6:
        days += 30;
        break;
    case 7:
        days += 31;
        break;     
    case 8:
        days += 31;
        break;
    case 9:
        days += 30;
        break;
    case 10:
        days += 31;
        break;
    case 11:
        days += 30;
        break;
    case 12:
        days += 31;
        break;       
    default:
        break;
    }
    month --;
    if (month >= 1){
        returndays(year , month);
    }
    
    return days;
}
    
