// ques - https://leetcode.com/problems/find-numbers-with-even-number-of-digits/

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n=nums.size();
        
        int c=0;
        for(int i=0;i<n;i++){
        string t=to_string(nums[i]);
            if(t.size()%2==0)c++;
            
            }
        
        return c;
    }
};
