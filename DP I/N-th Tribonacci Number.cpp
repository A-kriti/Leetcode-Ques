// ques - https://leetcode.com/problems/n-th-tribonacci-number/submissions/

class Solution {
public:
    int tribonacci(int n) {
        
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        if(n==2){
            return 1;
        }
        
        vector<int> v={0,1,1};
        
        for(int i=3;i<=n;i++){
            
            v.push_back(v[i-1]+v[i-2]+v[i-3]);
        }
        
        return v[v.size()-1];
    }
};
