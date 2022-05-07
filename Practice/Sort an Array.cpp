// ques - https://leetcode.com/problems/sort-an-array/

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        
        //method 1
        priority_queue<int,vector<int>,greater<int>>p;  //min heap
        int n=nums.size();
        for(int x:nums){
            p.push(x);
        }
        
        for(int i=0;i<n;i++){
            nums[i]=p.top();
            p.pop();
        }
        return nums;
        
        
        //method 2
//         priority_queue<int>p;   //max heap
//         int n=nums.size();
//         for(int x:nums){
//             p.push(x);
//         }
        
//         for(int i=n-1;i>=0;i--){
//             nums[i]=p.top();
//             p.pop();
//         }
//         return nums;
    }
};
