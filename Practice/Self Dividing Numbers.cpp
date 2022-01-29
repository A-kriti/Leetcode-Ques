// ques - https://leetcode.com/problems/self-dividing-numbers/

class Solution {
public:
    
    static bool check(int x){
        
        int y=x;
        
        while(x>1){
            int t=x%10;
            if(t==0)return false;
            if(y%t!=0)return false;
            x=x/10;
        }
        
        return true;
    }
    
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector<int>v;
        
        for(int i=left;i<=right;i++){
            if(check(i)==true)v.push_back(i);
        }
        
        return v;
    }
};
