// ques - https://leetcode.com/problems/jewels-and-stones/submissions/

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        
        int n=jewels.length();
        int p=stones.length();
        
        unordered_map<char,int>m;
        
        for(int i=0;i<n;i++){
            m[jewels[i]]=0;
        }
        
        for(int i=0;i<p;i++){
            
            if(m.find(stones[i])!=m.end()){
                m[stones[i]]++;
            }     
        }
        
        int ans=0;
        
        for(auto x:m){
            ans+=x.second;
        }
        
        return ans;
        
    }
};
