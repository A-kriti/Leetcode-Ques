// ques - https://leetcode.com/problems/roman-to-integer/submissions/

class Solution {
public:
    int romanToInt(string s) {
        map<char,int>m;
        
        m.insert(make_pair('I',1));
        m.insert(make_pair('V',5));
        m.insert(make_pair('X',10));
        m.insert(make_pair('L',50));
        m.insert(make_pair('C',100));
        m.insert(make_pair('D',500));
        m.insert(make_pair('M',1000));
        
        int n=s.length();
        int num=0;
        int sum=0;
        
        for(int i=0;i<n;){
            
             if(i==n-1 || m[s[i]]>=m[s[i+1]]){
                 
                 num=m[s[i]];
                 i++;
             }
            
            else{
                num=m[s[i+1]]-m[s[i]];
                 i+=2;
            }
            
            sum+=num;
        }
       
        return sum;
    }
};
