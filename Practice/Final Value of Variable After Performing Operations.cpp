// ques - https://leetcode.com/problems/final-value-of-variable-after-performing-operations/submissions/

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        
        int ans=0;
        int n=operations.size();
        
        for(int i=0;i<n;i++){
            if(operations[i]=="++X")++ans;
            else if(operations[i]=="X++")ans++;
            else if(operations[i]=="X--")ans--;
            else --ans;
        }
        
        return ans;
    }
};
