/*
��N*N��������,���Ƿ���һЩ1*1*1��������,ÿ��ֵv=grid[i][j]��ʾv������������ڶ�Ӧ��Ԫ��(i,j)��
���㷵����������ı����
��Ŀ���ӣ�https://leetcode-cn.com/problems/surface-area-of-3d-shapes
*/

//�ۼӷ� v=grid[i][j]
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
