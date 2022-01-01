// ques - https://leetcode.com/problems/substrings-of-size-three-with-distinct-characters/

class Solution {
public:
    int countGoodSubstrings(string s) {
        
        int n=s.length();
        
        if(n<3) return 0;
        
        int ans=0;
        
        int a=s[0];
        int b=s[1];
        int c=s[2];
        for(int i=3;i<n;i++){

                if(a!=b && b!=c && c!=a)ans++;
                
                a=b;
                b=c;
                c=s[i];
                

        }
        if(a!=b && b!=c && c!=a)ans++;
                
        
        return ans;
        
    }
};
