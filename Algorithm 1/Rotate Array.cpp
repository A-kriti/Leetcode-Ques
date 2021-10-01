// ques - https://leetcode.com/problems/rotate-array/submissions/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        
    int n=nums.size();
        
    if(k > n){
            k = k % n;
        }
        
    reverse(nums.begin(),nums.end()-k);
    reverse(nums.end()-k,nums.end());
    reverse(nums.begin(),nums.end());
        
    /*while(k>0){
        
        int t=nums[n-1];
        nums.pop_back();
        nums.insert(nums.begin()+0,t);
        k--;
    }*/
        
    }
};
