// ques - https://leetcode.com/problems/reverse-string/submissions/

class Solution {
public:
    void reverseString(vector<char>& s) {
        
        // 2 pointer Approach
        int n=s.size();
        int i=0;
        int j=n-1;
        
        while(i<=j){
            
            int t=s[i];
            s[i]=s[j];
            s[j]=t;
            i++;
            j--;
        }
        
         
        
        /* Simple Approach
        
        
        int n=s.size();
        
        for(int i=n-1;i>=0;i--){
            
            s.push_back(s[i]);
        }
        
        s.erase(s.begin(),s.begin()+n);*/
        
    }
};
