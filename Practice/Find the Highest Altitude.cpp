// ques - https://leetcode.com/problems/find-the-highest-altitude/

class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        
        int n=gain.size();
        int x=gain[0];
        int max_val=x;
        for(int i=1;i<n;i++){
            
            x=x+gain[i];
            
            max_val=max(max_val,x);
        }
        if(max_val<0)return 0;
        return max_val;
    }
};
