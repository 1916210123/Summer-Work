/*
在N*N的网格上,我们放置一些1*1*1的立方体,每个值v=grid[i][j]表示v个正方体叠放在对应单元格(i,j)上
请你返回最终形体的表面积
题目链接：https://leetcode-cn.com/problems/surface-area-of-3d-shapes
*/

//累加法 v=grid[i][j]
class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int size=grid.size();
        int count,i,j,v;
        count=0;
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                v=grid[i][j];
                if(v!=0)
                    count+=2;
                if(i==0)
                    count+=v;
                else
                    count+=max(v-grid[i-1][j],0);
                if(i==size-1)
                    count+=v;
                else
                    count+=max(v-grid[i+1][j],0);
                if(j==0)
                    count+=v;
                else
                    count+=max(v-grid[i][j-1],0);
                if(j==size-1)
                    count+=v;
                else
                    count+=max(v-grid[i][j+1],0);
            }
        }
        return count;
    }
};
