// ques - https://leetcode.com/problems/keep-multiplying-found-values-by-two/

class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        
        map<int,int>m;
        for(int x:nums){
            m[x]++;
        }
        
        bool n=true;
        while(n){
           if(m.find(original)!=m.end()){
               original*=2;
           }
           
           else n=false;
           
        }
       
        return original;
    }
};
