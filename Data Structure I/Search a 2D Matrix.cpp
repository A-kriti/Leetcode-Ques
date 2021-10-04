// ques - https://leetcode.com/problems/search-a-2d-matrix/submissions/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        
        int x=matrix.size();
        int y=matrix[0].size();
        
       /* Brute Force Method
       
       for(int i=0;i<x;i++){
            
            for(int j=0;j<y;j++){
                
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        
        return false;
        */
        
        
        
        for(int i=0;i<x;i++){
            
            int left=0;
            int right=y;
            for(int j=0;j<y;j++){
                
                int mid=(left+right)/2;
                
                if(matrix[i][mid]==target){
                    return true;
                }
                
                if(matrix[i][mid]<target){
                    left=mid;
                }
                
                if(matrix[i][mid]>target){
                    right=mid;
                }
                
            }
        }
        
        
        return false;
    }
};
