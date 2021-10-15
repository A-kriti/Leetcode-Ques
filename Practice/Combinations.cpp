// ques - https://leetcode.com/problems/combinations/submissions/


class Solution {
public:
    
   vector<vector<int>> ans; 
    
    void combination(vector<int>&subset,int i,int n,int k){
        
        if(subset.size()==k){
            ans.push_back(subset);
            return;
        }
        
        for(int j=i;j<=n;j++){
            subset.push_back(j);
            combination(subset,j+1,n,k);
            subset.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        
        vector<int>empty;
        combination(empty,1,n,k);
        return ans;
    
    }
        
};
