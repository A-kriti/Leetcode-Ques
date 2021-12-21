// ques - https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/

class Solution {
public:
    vector<int> minOperations(string boxes) {
        
        int n=boxes.length();
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<n;i++){
            int x=boxes[i]-'0';
            v.push_back(x);
            if(x==1)v1.push_back(i);
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            int t=0;
            for(int x:v1){
                
                t+=abs(i-x);
            }
            ans.push_back(t);
        }
        
        return ans;
    }
};
