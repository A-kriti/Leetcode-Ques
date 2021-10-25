// ques - https://leetcode.com/problems/kth-largest-element-in-an-array/submissions/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        // method 1(max heap)
        priority_queue<int>p;
        
        int n=nums.size();
        int ans;
        for(int i=0;i<n;i++){
            p.push(nums[i]);
        }
        
        while(k){
            ans=p.top();
            p.pop();
            k--;
        }
        return ans;
        
        //method 2
        
         /*sort(nums.begin(),nums.end());
        
        int n=nums.size();
        int ans=nums[n-k];
        return ans;*/
        
    }
};
