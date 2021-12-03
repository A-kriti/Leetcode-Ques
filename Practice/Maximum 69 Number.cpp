// ques - https://leetcode.com/problems/maximum-69-number/

class Solution {
public:
    int maximum69Number (int num) {
        
        vector<int>v;
        
        while(num>0){
            int x=num%10;
            v.push_back(x);
            num/=10;
        }
        
        reverse(v.begin(),v.end());
        int n=v.size();
        int t=1;
        int ans=0;
        
        for(int i=0;i<n;i++){
     
                if(v[i]==6 && t>0){
                    v[i]=9;
                    t--;
                }
     
            ans+=v[i]*pow(10,n-i-1);
            
            
        }
        
        return ans;
        
    }
};
