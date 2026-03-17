/*
 * @lc app=leetcode.cn id=1470 lang=c
 *
 * [1470] 重新排列数组
 */

// @lc code=start
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include<stdio.h>
// @lc code=end
int* shuffle(int* nums, int numsSize, int n, int* returnSize) {
   int *ans=(int*)malloc(2*n*(sizeof(int)));
   *returnSize=2*n;
   for (int i=0;i<2*n;i++){
    if(i<n){
        ans[2*i]=nums[i];
     }
     else{
        ans[2*(i-n)+1]=nums[i];
     }
   }
   return ans;
}

//get input of n
int main(void){
    int n;
    printf("enter the value of n\n");
    if(scanf("%d",&n)!=1||n<=0){
        printf("Invalid input");
        return 1;  }

//prepare the input arr
        int totalSize=2*n;
int *inputArr=(int *)malloc(2*n*(sizeof(int)));
printf("enter %d integers",totalSize);
for (int i=0;i<totalSize;i++){
    scanf("%d",&inputArr[i]);
}

//call function
int returnSize;
int *result=shuffle(inputArr,totalSize,n,&returnSize);

//print the result
printf("shuffled arr:[");
for (int i=0;i<returnSize;i++){
    printf("%d",result[i]);
    if (i<returnSize-1){
        printf(",");
    }
}
printf("]");
free(inputArr);
free(result);
return 0;
}


