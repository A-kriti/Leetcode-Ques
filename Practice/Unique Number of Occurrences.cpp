// ques - https://leetcode.com/problems/unique-number-of-occurrences/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        map<int,int>m;
        
        for(int x:arr){
            m[x]++;
        }
        
        map<int,int>m1;
        for(auto x:m){
            
            if(m1.find(x.second)!=m1.end())return false;
            
            m1[x.second]++;
        }
        
        return true;
    }
};
