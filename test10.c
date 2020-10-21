#include <stdio.h>
//get average score of every subject and students
int main()
{
    int students_numebr,subjects_number;
    scanf ("%d%d",&students_numebr,&subjects_number);
    int score_average[students_numebr + 1][subjects_number];
    //number input;
    char ch;
    int i = 0 , j = 0 , stack = 0;
    do
    {
        do
        {
            scanf("%d",&score_average[i][j]);
            j ++;
        } while (ch=getchar() != '\n');
        i ++;
        j = 0;
    } while (i != students_numebr);
    
    for (j = 0 ; j < subjects_number ; j ++){
        for (i = 0 ; i < students_numebr ; i ++){
            stack += score_average[i][j];
        }
        score_average[i+1][j] = (double)stack / students_numebr;
        stack = 0;
    }
    for (j = 0 ; j < subjects_number ; j ++){
        printf("%4.1f",score_average[students_numebr + 1][j]);
    }
    return 0;
    
}