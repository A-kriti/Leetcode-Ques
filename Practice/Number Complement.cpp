// ques - https://leetcode.com/problems/number-complement/submissions/

class Solution {
public:
    
    vector<int> tobinary(int x){
        vector<int>v;
        
        while(x>0){
            int t=(x%2);
            v.push_back(t);
            x=x/2;
        }
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
            v[i]=v[i]^1;
        }
        return v;
    }
    
    int findComplement(int num) {
        
        vector<int>ans=tobinary(num);
        
        int n=0;
        
        for(int i=0;i<ans.size();i++){
            n+=pow(2,ans.size()-1-i)*ans[i];
        }
        
        return n;
    }
};
