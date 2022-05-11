// ques - https://leetcode.com/problems/lucky-numbers-in-a-matrix/

class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        map<int,int>mp;
        
        for(int i=0;i<n;i++){
            int t=INT_MAX;
            for(int j=0;j<m;j++){
                
                if(matrix[i][j]<t)
                t=matrix[i][j];
                
            }
            mp[t]++;
        }
        
        for(int j=0;j<m;j++){
            int t=INT_MIN;
            for(int i=0;i<n;i++){
            
                if(matrix[i][j]>t)
                t=matrix[i][j];
                
            }
            mp[t]++;
        }
        
        vector<int>v;
        for(auto x:mp){
            if(x.second>1)v.push_back(x.first);
        }
        
        return v;
    }
};
