// ques - https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        unordered_map<int,int> m;
        int n=numbers.size();
        vector<int>v;
        
        for(int i=0;i<n;i++){
            
            if(m.find(target-numbers[i])!=m.end()){
                v.push_back(m[target-numbers[i]]+1);
                v.push_back(i+1);
                
            }
            
            else{
                m[numbers[i]]=i;
            }
        }
        
        return v;
    }
};
