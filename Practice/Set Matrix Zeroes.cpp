// ques - https://leetcode.com/problems/set-matrix-zeroes/


//method 1
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

//method 2

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int row=matrix.size();
        int col=matrix[0].size();
        
        vector<int>v_row(row,1);
        vector<int>v_col(col,1);
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(matrix[i][j]==0){
                    v_row[i]=0;
                    v_col[j]=0;
                }
            
            }
        }
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                
                if(v_row[i]==0 || v_col[j]==0){
                    matrix[i][j]=0;
                    
                }
            
            }
        }
        
       
        
    }
};
