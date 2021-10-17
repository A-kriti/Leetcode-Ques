// ques - https://leetcode.com/problems/implement-strstr/

class Solution {
public:
    int strStr(string haystack, string needle) {
        
        int x=haystack.length();
        int y=needle.length();
        
        if(x==0 && y==0){
            return 0;
        }
        
        
        return haystack.find(needle);
        
        
    }
};
