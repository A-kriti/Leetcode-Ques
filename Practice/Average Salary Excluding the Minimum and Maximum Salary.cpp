// ques - https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

class Solution {
public:
    double average(vector<int>& salary) {
        
        int n=salary.size();
        
        int a=*min_element(salary.begin(),salary.end());
        int b=*max_element(salary.begin(),salary.end());
        
        double ans=0;
        
        for(int x:salary){
            if(x!=a && x!=b)ans+=x;
        }
        
        return ans/(n-2);
    }
};
