/*
给定M×N矩阵，每一行、每一列都按升序排列，请编写代码找出某元素。
示例:
现有矩阵 matrix 如下：
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定target=5,返回true
给定target=20,返回false
*/

//从矩阵右上角开始查找，若目标值>15(右上角元素),下移一行；若目标值小于查找值，左移一列

#include<stdio.h>
int main(void)
{
    int matrix[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};    /*直接给出矩阵martix*/
    int i,j,target;
    printf("target=");
    scanf("%d",&target);
    for(i=4;i>=0;i--){
        for(j=0;j<5;j++){                  /*从右上角开始比较*/
            if(target>matrix[i][j]){
                continue;                  /*下移一行*/
            }
            if(target==matrix[i][j]){
                printf("true\n");
                return 0;                  /*目标值等于查找值，输出结果，结束*/
            }
            if(target<matrix[i][j]){
                break;                     /*左移一列*/
            }
        }
    }
    printf("false\n");
    return 0;
}
