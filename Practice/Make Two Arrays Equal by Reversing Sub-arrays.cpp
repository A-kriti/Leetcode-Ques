// ques - https://leetcode.com/problems/make-two-arrays-equal-by-reversing-sub-arrays/

class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        
        map<int,int>m;
        
        for(int x:arr){
            m[x]++;
        }
        
        for(int x:target){
            
            if(m.find(x)==m.end())return false;
            m[x]--;
            
            if(m[x]==0) m.erase(x);
        }
       
        return true;
    }
};
