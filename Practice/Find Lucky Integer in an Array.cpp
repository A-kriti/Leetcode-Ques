// ques - https://leetcode.com/problems/find-lucky-integer-in-an-array/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        
        map<int,int>m;
        for(int x:arr){
            m[x]++;
        }
        
        int ans=INT_MIN;
        for(auto x:m){
            if(x.first==x.second){
                ans=max(ans,x.first);
            }
        }
        return ans>0?ans:-1;
    }
};
