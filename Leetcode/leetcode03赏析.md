### leetcode03无重复字符的最长字串：
> 给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。
```c++
int lengthOfLongestSubstring(char * s){
    int i; /* 计数器 */
    int j = 0; 
    int count = 0; /* 子串当前长度 */
    int max = 0; /* 子串当前长度 */
    int index[128] = {0}; /* 记录每个字符先后出现的位置 */
    int start = 0;
    for(i=0;s[i]!='\0';i++)     
    {
        if(index[s[i]]>start)//index用来储存出现重复字符时
        {                     //子串起始下标应移动到的地方
            count = i-start;
            if(count>max)
            {
                max = count;
            }
            start = index[s[i]];
        }
        index[s[i]] = i+1;
    }
    count = i-start;
    return count>max?count:max;
}

```