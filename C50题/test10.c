#include <stdio.h>
//get average score of every subject and students
int main()
{
    int students_numebr,subjects_number;
    printf("请输入学生人数以及功课数(麻烦按照顺序来编写：)：\n");
    scanf ("%d%d",&students_numebr,&subjects_number);
    int score_average[students_numebr + 1][subjects_number];
    //number input;
    char ch;
    int i = 0 , j = 0 , stack = 0,key = 0,topstudent = 0;
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
        score_average[i][j] = stack / students_numebr;
        stack = 0;
    }
    for (j = 0 ; j < subjects_number ; j ++){
        printf("%-4.1d",score_average[students_numebr][j]);
    }
    //这里用来判读有多少个孩子超过了平均分呢！！！
    //每一行我们都表示一个孩子的各科成绩，我想这没过一门就加一分然后在汇总等于科目数的为优胜者。。
    for (i = 0 ; i < students_numebr ; i ++){
        for (j = 0 ; j < subjects_number ; j ++){
            if (score_average[i][j] >= score_average[students_numebr][j]){
                key ++;
            }
        }
        if (key == subjects_number){
                topstudent ++;
        }
    }
    printf("\n一共有%d个孩子的成绩超过了平均的成绩！！！！\n",topstudent);
    return 0;
    
}