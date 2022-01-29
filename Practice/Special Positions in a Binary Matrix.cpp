// ques - https://leetcode.com/problems/special-positions-in-a-binary-matrix/

class Solution {
public:
    static bool check(vector<vector<int>>& mat,int &i,int &j){
        
        int n=mat.size();
        int m=mat[0].size();
        
        for(int x=0;x<n;x++){
           
            if(mat[x][j]!=0 && x!=i)return 0;
            
        }
        
         for(int y=0;y<m;y++){
                if(mat[i][y]!=0 && y!=j)return 0;
            }
        return 1;
    }
    
    int numSpecial(vector<vector<int>>& mat) {
        
        int n=mat.size();
        int m=mat[0].size();
        int c=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                if(mat[i][j]==1){
                    if(check(mat,i,j))c++;
                }
            }
        }
        
        return c;
    }
};
