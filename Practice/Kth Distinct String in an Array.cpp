// ques - https://leetcode.com/problems/kth-distinct-string-in-an-array/

class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string, int> m;
        
        for(string x:arr){
            m[x]++;
        }
       
        for(string x:arr){

            if(m[x]==1)k--;
            
            if(k==0) return x;
                     
        }
        
        return "";
    }
};
