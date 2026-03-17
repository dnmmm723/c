#include <stdio.h>
#include <stdlib.h>

/*
 * @lc app=leetcode.cn id=867 lang=c
 *


 * [867]
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */


 int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
     int n=matrixColSize[0],m=matrixSize;
    int **ans=malloc(n*sizeof(*ans));//allocate an array of n elements,where each is a poiner to an integer
    *returnSize=n;                                                                                                                                                                                                                                               
    *returnColumnSizes=malloc(n*sizeof(int));//allocate space for n integers to store the number of colunms for each row
    for(int i=0;i<n;i++){                                                                                                              
        ans[i]=malloc(m*sizeof(int));
        (*returnColumnSizes)[i]=m;//allocate space for m integers for the i row to store the actual transposed values
        for(int j=0;j<m;j++){
            ans[i][j]=matrix[j][i];
            }
        }
        return ans;
}
// @lc code=end
//prepare the input arr
int main(void){
    int **arr;
    int rows=0,vols=0;
    printf("Input the value for rows\n");
    scanf ("%d",&rows);
     printf("Input the value for vols");
    scanf("%d",&vols);
    arr=malloc(rows*sizeof(int*));
    printf("input the each value of elements");
    for (int i=0;i<rows;i++){
        arr[i]=malloc(vols*sizeof(int*));
        for (int j=0;j<vols;j++){
             scanf("%d",&arr[i][j]);
        }
    }
//call function
int *vcols,returnSize;
  int **result=transpose(arr,rows, &vols, &returnSize, &vcols);

  //print the result
  for (int i=0;i<rows;i++){
    for(int j=0;j<vols;j++){
        printf("%d",result[i][j]);
         }printf("\n");
  }
  for (int i=0;i<rows;i++){
    free(arr[i]);
  }
  free(arr);
  free(result);
return 0;
}

