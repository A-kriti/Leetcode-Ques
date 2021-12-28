// ques - https://leetcode.com/problems/can-make-arithmetic-progression-from-sequence/

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans=arr[1]-arr[0];
        for(int i=2;i<n;i++){
            
            int t= arr[i]-arr[i-1];
            if(t!=ans) return false;
        }
        
        return true;
    }
};
