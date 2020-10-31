#include <stdio.h>

int main()
{
    int studentnumber = 0;
    int questionnumber = 0;
    scanf("%d %d",&studentnumber,&questionnumber);
    int matrixP[studentnumber + 2][questionnumber];
    int toolmanOne = 0;
    int toolmanTwo = 0;
    do
    {
        do
        {
            scanf("%d",&matrixP[toolmanOne][toolmanTwo]);
            toolmanTwo ++;
        } while (toolmanTwo < questionnumber);
        toolmanTwo = 0;
        toolmanOne ++;
    } while (toolmanOne < studentnumber + 2);
    for (int cycle = 2; cycle < studentnumber + 2; cycle ++)
    {   
        int score = 0;
        for (int i = 0; i < questionnumber; i ++)
        {
            if (matrixP[cycle][i] == matrixP[1][i])
            {
                score += matrixP[0][i];
            }
        }
        printf("%d\n",score);
    }
    return 0;
}