// ques - https://leetcode.com/problems/shifting-letters/submissions/

class Solution {
public:
    string shiftingLetters(string s, vector<int>& shifts) {
        
        // Method 1
        // Time: O(n) and Space: O(1)
        int n=shifts.size();
        
        int t=0;
     
        for(int j=n-1;j>=0;j--){
                
            t+=shifts[j]%26;
              
            s[j]=(s[j]-'a'+t)%26+'a';
        }

          
        // Method 2
        // Time: O(n^2) and Space: O(1)
//         int i=0;
//         while(i<n){
            
//             for(int j=0;j<=i;j++){
//                 char t=shifts[i]%26;
//                 s[j]=(s[j]+t-'a')%26+'a';
//             }
//             i++;
            
//         }
        
        return s;
    }
};
