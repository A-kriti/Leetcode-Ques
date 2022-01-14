// ques - https://leetcode.com/problems/replace-elements-with-greatest-element-on-right-side/

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
         vector<int>v;
        if(arr.size()<=1){
            v.push_back(-1);
        return v;
        }
        
        for(int i=1;i<arr.size();i++){
            
            int t=*max_element(arr.begin()+i,arr.end());
            v.push_back(t);
        }
        
        v.push_back(-1);
        return v;
    }
};
