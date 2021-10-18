// ques - https://leetcode.com/problems/minimum-path-sum/

class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int row=grid.size();
        int col=grid[0].size();
        
        int t[row][col];
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
            
                if(i==0 && j==0){
                    t[i][j]=grid[i][j];
                    
                }
                else if(i==0){
                    t[i][j]=grid[i][j]+t[i][j-1];
                    
                }
                else if(j==0){
                    t[i][j]=grid[i][j]+t[i-1][j];
                    
                }
                
                else{
                    
                    int min=t[i-1][j];
                    if(min>t[i][j-1]){
                        min=t[i][j-1];
                    }
                   
                    t[i][j]=grid[i][j]+min;
                    
                }
                
            }
        }
        
        return t[row-1][col-1];
        
    }
};
