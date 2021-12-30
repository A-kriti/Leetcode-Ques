// ques - https://leetcode.com/problems/check-if-all-characters-have-equal-number-of-occurrences/

class Solution {
public:
    bool areOccurrencesEqual(string s) {
        
        map<char,int>m;
        set<int>t;
        for(char x:s){
            m[x]++;
        }
        
        for(auto x:m){
            t.insert(x.second);
        }
        
        if(t.size()==1)return 1;
        
        return 0;
        
    }
};
