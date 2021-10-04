// ques - https://leetcode.com/problems/valid-sudoku/submissions/

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_set<string> s;
        
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                
                if(board[i][j]!='.'){
                   
                    string x="row"+to_string(i)+to_string(board[i][j]);
                    string y="column"+to_string(j)+to_string(board[i][j]);
                    string z="box"+to_string(i/3*3+j/3)+to_string(board[i][j]);
                        
                    
                    if(s.find(x)!=s.end() || s.find(y)!=s.end() || s.find(z)!=s.end())
                        return false;
                    
                       
                    else{
                        s.insert(x);
                        s.insert(y);
                        s.insert(z);
                        }
                
                    }
                }
            }
        
        return true;
    }
};
