// ques - https://leetcode.com/problems/keyboard-row/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        
        vector<string> ans;
        
        string s1= "qwertyuiopQWERTYUIOP";
        string s2= "asdfghjklASDFGHJKL";
        string s3= "zxcvbnmZXCVBNM";
        
        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;
        unordered_map <char,int> mp3;
        
        for (char x: s1){
            
            mp1[x]++;
        }
        
        for (char x: s2){
            mp2[x]++;
        }
        
        for (char x: s3){
            mp3[x]++;
        }
        bool temp1;
        bool temp2;
        bool temp3;
        for (string str: words){
            
            temp1 = true;
            temp2 = true;
            temp3 = true;
            
            int n = str.size();
            for (int i=0; i<n; ++i){
                
                if (mp1.find(str[i])==mp1.end())temp1=false;
                
                if (mp2.find(str[i])==mp2.end())temp2=false;
                
                if (mp3.find(str[i])==mp3.end())temp3=false;
        
            }  
            
            if (temp1==true)ans.push_back(str);
            
            if (temp2==true)ans.push_back(str);
            
            if (temp3==true)ans.push_back(str);
                    
        }
        
        return ans;
        
        
    }
};
