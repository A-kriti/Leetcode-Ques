// ques - https://leetcode.com/problems/redistribute-characters-to-make-all-strings-equal/

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        
        int n=words.size();
        
        map<char,int>m;
        
        for(string x:words){
            for(char y:x){
                m[y]++;
            }
        }
        
        for(auto x:m){
            if(x.second%n !=0)return false;
        }
        
        return true;
    }
};
