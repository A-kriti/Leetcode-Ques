// ques - https://leetcode.com/problems/relative-sort-array/

class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        vector<int>v;
        map<int,int>m;
        
        for(int x:arr1){
            m[x]++;
        }
        
        for(int x:arr2){
            if(m.find(x)!=m.end()){
                
                for(int i=0;i<m[x];i++){
                    v.push_back(x);
                }
                m[x]=0;
            }
        }
        
        for(auto x:m){
            if(x.second>0){
                
                for(int i=0;i<x.second;i++)v.push_back(x.first);
            }
        }
        
        return v;
    }
};
