// ques - https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        
        int r=grid.size();
        int c=grid[0].size();
        int count=0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]<0)count++;
            }
        }
        
        return count;
    }
};
