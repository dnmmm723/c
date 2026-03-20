/*
 * @lc app=leetcode.cn id=1422 lang=c
 *
 * [1422] 分割字符串的最大得分
 */

// @lc code=start
#include <stdio.h>
#include <stdlib.h>

int maxScore(char* s) {
    int max=0;
    for(int i=0;s[i+1]!='\0';i++){
        int sum=0;
        for(int n=0;n<=i;n++)
            {if(s[n]=='0'){
                sum+=1;}
             }
        for(int m=i+1;s[m]!='\0';m++){
            if(s[m]=='1'){
                sum+=1;}
            }
        if (max<sum){
            max=sum;}
        }
     return max;
    }
int main() {
    char s[100];
    while(scanf("%s",s)!=EOF){
    printf("%d", maxScore(s));}
    return 0;
}

// @lc code=end

