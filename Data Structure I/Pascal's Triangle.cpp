// ques - https://leetcode.com/problems/pascals-triangle/submissions/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>PascalT(numRows);
        
        for(int i=0;i<numRows;i++){
            PascalT[i].resize(i+1);
            PascalT[i][0]=PascalT[i][i]=1;
            
            for(int j=1;j<i;j++){
                
                PascalT[i][j]=PascalT[i-1][j-1]+PascalT[i-1][j];
            }
        }
        
        return PascalT;
    }
};
