// ques - https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/

class Solution {
public:
    string reverseWords(string s) {
        
    vector<int> v;
    for(int i=0;i<=s.size();i++){
        
         if(s[i]==' '|| s[i]=='\0')
            v.push_back(i);
        
    }
            
    int l=0;
    for(int i=0;i<v.size();i++){
        
        int r=v[i]-1;
        while(l<r){
            
            char t=s[l];
            s[l]=s[r];
            s[r]=t;
            
            l++;
            r--;
        }
        
        l=v[i]+1;
            
    }
        
    return s; 
               
    }
};
