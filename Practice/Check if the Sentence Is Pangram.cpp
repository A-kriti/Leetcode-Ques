// ques - https://leetcode.com/problems/check-if-the-sentence-is-pangram/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        
        unordered_map<char,int>m;
        
        int n=sentence.length();
        
        for(int i=0;i<n;i++){
            m[sentence[i]]++;
        }
        
        if(m.size()==26) return true;
        
        return false;
    }
};
