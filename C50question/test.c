# include <stdio.h>
# define NUMBER
int absoulte_number(int tense[]){
    int i;
    for (i = 0; i < sizeof(tense) ; i ++){
        if (tense[i] < 0){
            tense[i] = -tense[i];
        }
    }
    return tense;
}

int main(void)
{   
    int select = 1;
    char h;
    while ( select == 1){
        int v,j,s;
        printf("Please input your number_list's length:");scanf("%d",&v);
        int tense[v];
        int i ;
        for (i = 0; i < v ; i ++){
            printf("Please input your "); printf("number");scanf("%d",&tense[i]);
        }
        absoulte_number(tense);
        for (i = 0 ; i < v ; i ++){
            for (j = 0; j < v ; j ++){
                if (tense[j] < tense[i]){
                        s = tense[i];
                        tense[i] = tense[j];
                        tense[j] = s;                
                }
            }
        }
        for ( i = 0; i < v; i++)
        {
            printf("%d ",tense[i]);
        }
        printf("Do you want to run again? (y/n)");scanf("%c",&h);
        if (h == 0){
            select = 0;
        }
    }
    
    return 0;
}



