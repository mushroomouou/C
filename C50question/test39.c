#include <stdio.h>
//人民币一共有100元、50元、10元、5元、2元和1元六种
int main()
{
    int teacherNumber = 0;
    scanf("%d",&teacherNumber);
    int scorelist[teacherNumber];
    int toolman = 0;
    int pieces = 0;
    do
    {
        scanf("%d",&scorelist[toolman]);
        toolman ++;
    } while (toolman < teacherNumber);
    for (toolman = 0; toolman < teacherNumber; toolman ++)
    {
        if (scorelist[toolman] / 100 != 0)
        {
            int haha = scorelist[toolman] / 100;
            scorelist[toolman] = scorelist[toolman] - haha * 100;
            pieces += haha;
        }
        if (scorelist[toolman] / 50 != 0)
        {
            int half = scorelist[toolman] / 50;
            scorelist[toolman] = scorelist[toolman] - half * 50;
            pieces += half;
        }
        if (scorelist[toolman] / 10 != 0)
        {
            int ten = scorelist[toolman] / 10;
            scorelist[toolman] = scorelist[toolman] - ten * 10;
            pieces += ten;
        }
        if (scorelist[toolman] / 5 != 0)
        {
            int five = scorelist[toolman] / 5;
            scorelist[toolman] = scorelist[toolman] - five * 5;
            pieces += five;
        }
        if (scorelist[toolman] / 2 != 0)
        {
            int two = scorelist[toolman] / 2;
            scorelist[toolman] = scorelist[toolman] - two * 2;
            pieces += two;
        }
        pieces += scorelist[toolman];
    }
    printf("%d",pieces);
    return 0;
}