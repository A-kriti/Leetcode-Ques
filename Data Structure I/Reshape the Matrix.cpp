// ques - https://leetcode.com/problems/reshape-the-matrix/submissions/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        
        
        int x=mat.size();
        int y=mat[0].size();
        
        if(x*y!=r*c){
            return mat;
        }
        
        int u=0;
        int v=0;
        vector<vector<int>> ans(r,vector<int>(c,0));
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                
                ans[i][j]=mat[u][v++];
                
                if(v==y) u++;
                v%=y;
            }
        }
        
        return ans;
    }
};
