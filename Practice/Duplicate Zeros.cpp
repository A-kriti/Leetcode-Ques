// ques - https://leetcode.com/problems/duplicate-zeros/

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int n=arr.size();
        int i=0;
        
        while(i<n)
        {
            if(arr[i]==0){
                arr.insert(arr.begin()+i+1,0);
                arr.pop_back();
                i+=2;
            }
            else i++;
        }
        
        
    }
};
