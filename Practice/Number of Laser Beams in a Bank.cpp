// ques - https://leetcode.com/problems/number-of-laser-beams-in-a-bank/

class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        
        int n=bank.size();
        vector<int>v;
        
        for(int i=0;i<n;i++){
            
            int t=0;
            for(int j=0;j<bank[i].length();j++){
                if(bank[i][j]=='1')t++;
            }
            
            if(t>0){
                v.push_back(t);
            }
            
        }
        
        int ans=0;
        for(int i=1;i<v.size();i++){
            
            int z=(v[i]*v[i-1]);
            ans+=z;
        }
        
       return ans;
        
    }
};
