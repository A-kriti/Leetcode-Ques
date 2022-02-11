// ques - https://leetcode.com/problems/minimum-absolute-difference/

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());
        int t=INT_MAX;
        
        for(int i=1;i<arr.size();i++){
            t=min(t,abs(arr[i]-arr[i-1]));
        }
        
        vector<vector<int>>v;
        
        for(int i=1;i<arr.size();i++){
           if(abs(arr[i]-arr[i-1])==t){
                vector<int>k;
                k.push_back(arr[i-1]);
                k.push_back(arr[i]);
                v.push_back(k);
           }
        }

        return v;
    }
};
