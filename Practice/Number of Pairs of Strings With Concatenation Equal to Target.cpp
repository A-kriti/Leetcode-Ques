// ques - https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/

class Solution {
public:
    
    int numOfPairs(vector<string>& nums, string target) {
        
        int n=nums.size();
        int c=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                
                if(i!=j){
                    string t=nums[i]+nums[j];
                    if(t==target)c++;
                }
                
                
            }
        }
        
        return c;
    }
};
