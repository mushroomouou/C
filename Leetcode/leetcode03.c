#include <stdio.h>
#include <string.h>
int lengthOfLongestSubstring(char * s)
{
        //从字符串的第一位开始往后检索，如果有重复则把已经得到的字串长度存到一个数组里面，存储起来，然后首位往后进一位，往后检索。最后求取所得的数组中的最大值则为最长子串.
        int numberresult[100] = {0};
        //字符串的打印然后计数。
        //如果出现重复元素，则立马放下随后存入数组。
        int index = 0;
        int counts = 0;
        int stringlenth = 0;
        int upnumber = 0;
        int i = 0,j = 0;
        char searchch[10000];
        int booler = 1;
        memset(searchch,'\0',100);
        int number = strlen(s);
        //检索系统:
        while(upnumber != number && *s != '\0')
        {   int lenth = strlen(s);
            while (1)
            {
                for (int m = 0; m < strlen(searchch); m ++)
                {
                    if (s[j] == searchch[m])
                    {
                        booler = 0;
                        break;
                    }
                    
                }
                if (booler == 0)
                {
                    break;
                }
                if (j == lenth)
                {
                    break;
                }
                searchch[i] = s[j];
                i ++;
                j ++;
                counts ++;
               
            }
            numberresult[index] = counts;
            counts = 0;
            i = 0;
            j = 0;
            booler = 1;
            index ++;
            memset(searchch,'\0',100);
            upnumber ++;
            s ++;

        }
        int max = 0;
        for (int cyc = 0 ; cyc < sizeof(numberresult)/sizeof(int) ; cyc ++)
        {
            if (max < numberresult[cyc])
            {
                max = numberresult[cyc];
            }
        }
        return max;
        

}
int main()
{
    char * s = "hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789hijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int result =lengthOfLongestSubstring(s);
    printf("%d",result);
    return 0;
}