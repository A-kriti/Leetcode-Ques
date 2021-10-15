// ques - https://leetcode.com/problems/longest-common-prefix/submissions/


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int max_i=INT_MAX;
        string c=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;
            int k=0;
            int a=0;
            while(j<c.size() && k<strs[i].size()){
                
                if(c[j]==strs[i][k])a++;
                else break;
                j++;
                k++;
                    
            }
            max_i=min(max_i,a);
        }
        
        return c.substr(0,max_i);
    }
};
