// ques - https://leetcode.com/problems/maximum-product-of-word-lengths/submissions/

class Solution {
public:
    
    int maxProduct(vector<string>& words) {
    
        map<int,int>m;
        int ans=0;
        
        for(string x:words){
            
            int t=0;
            for(char y:x)
                t|=1<<(y-'a');
            
            m[t]=max(m[t],(int)x.size());
            for(auto i:m)
                if(!(t&i.first))
                    ans=max(ans,(int) x.size()*i.second);   
        }
        
        return ans;
        
    }
};
