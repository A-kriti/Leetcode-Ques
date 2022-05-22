//ques - https://leetcode.com/problems/decode-xored-array/

class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        
        vector<int>v;
        v.push_back(first);
        int y=first;
        
        for(int x:encoded){
            y=y^x;
            v.push_back(y);
        }
        
        return v;
    }
};
