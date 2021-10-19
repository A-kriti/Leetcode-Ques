// ques - https://leetcode.com/problems/complement-of-base-10-integer/

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
    
    int bitwiseComplement(int n) {
        
        if(n==0)return 1;
        vector<int>v=tobinary(n);
        
        int y=v.size();
        int ans=0;
        
        for(int i=0;i<y;i++){
            ans+=pow(2,y-1-i)*v[i];
        }
        
        return ans;
    }
};
