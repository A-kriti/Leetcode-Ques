// ques - https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int x=matrix.size();
        int y=matrix[0].size();
        
        vector<int>vx;
        vector<int>vy;
        
        for(int i=0;i<x;i++){
            vx.push_back(1);
        }
        
        for(int j=0;j<y;j++){
            vy.push_back(1);
        }
        
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                
                if(matrix[i][j]==0){
                    
                    vx[i]=0;
                    vy[j]=0;    
                    
                }
            }
        }
        
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                
                if(vx[i]==0 || vy[j]==0){
                    
                        
                    matrix[i][j]=0;
                }
            }
        }
            
        
    }
};
