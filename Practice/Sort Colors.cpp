// ques - https://leetcode.com/problems/sort-colors/submissions/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //method 1;
        
        int n=nums.size();
        int i=0;
        int curr=0;
        int j=n-1;
        
        while(curr<=j){
            
            while(curr<j && nums[curr]==2){
                swap(nums[curr],nums[j]);
                j--;
            }
            
            while(curr>i && nums[curr]==0){
                swap(nums[curr],nums[i]);
                i++;
            }
            
            curr++;
                
        }
        
        
        
        //method 2;
        
        /*priority_queue<int,vector<int>,greater<int>>p;
        
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        
        for(int i=0;i<nums.size();i++){
            nums[i]=p.top();
            p.pop();
        }*/
        
        
    }
};
