// ques - https://leetcode.com/problems/minimum-index-sum-of-two-lists/

class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        
        vector<string>v;
        map<string,int>m;
        for(int i=0;i<list1.size();i++){
           for(int j=0;j<list2.size();j++){
            
                if(list2[j]==list1[i]){
                    m[list2[j]]=j+i;
                }
            
            }
        }
         
        int k=INT_MAX;
        for(auto x:m){
            k=min(k,x.second);
        }
        
        for(auto x:m){
            if(x.second==k)v.push_back(x.first);
        }
        
        return v;

    }
};
