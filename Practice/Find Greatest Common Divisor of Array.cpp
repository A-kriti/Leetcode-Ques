// ques - https://leetcode.com/problems/find-greatest-common-divisor-of-array/

class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        int min=*min_element(nums.begin(),nums.end());
        int max=*max_element(nums.begin(),nums.end());
        
        int ans=gcd(min,max);
        
        return ans;
        
        
    }
    
    int gcd(int min,int max){
        
        
        while(max%min!=0){
            int t=min;
            min=max%min;
            max=t;
            gcd(min,max);
        }
        
        return min;
    }
};
