// ques - https://leetcode.com/problems/unique-paths-ii/submissions/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int x=obstacleGrid.size();
        int y=obstacleGrid[0].size();
        
        /*if(x<=1 && y<=1){
            return 0;
        }*/
        
        int t[x][y];
        int flag=0;
        for(int i=0;i<x;i++){
            
            if(obstacleGrid[i][0]==1){
                t[i][0]=0;
                flag=1;
                
            }
            else if(flag==1){
                t[i][0]=0;
            }
            else{
                t[i][0]=1;
            }
            
        }
        
        flag=0;
        for(int j=0;j<y;j++){
            
            if(obstacleGrid[0][j]==1){
                t[0][j]=0;
                flag=1;
                
            }
            else if(flag==1){
                t[0][j]=0;
            }
            else{
                t[0][j]=1;
            }
            
        }
        
        
        for(int i=1;i<x;i++){
            for(int j=1;j<y;j++){
                
                if(obstacleGrid[i][j]==1){
                    t[i][j]=0;
                }
                else{
                    
                   t[i][j]=t[i-1][j]+t[i][j-1];
                    
                }
                
            }
        }
        
        return t[x-1][y-1];
        
    }
};
