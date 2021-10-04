//ques - https://leetcode.com/problems/count-good-triplets/submissions/


class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        
        
        int i,j,k;
        int count=0;
        int n=arr.size();
        for(i=0;i<n;i++){
            
            for(j=i;j<n;j++){
                
                for(k=j;k<n;k++){
                    
                    if(abs(arr[i]-arr[j])<=a & abs(arr[j]-arr[k])<=b & abs(arr[i]-arr[k])<=c){
                        
                        if(i<j & j<k){
                           count++; 
                        }
                        
                    }
                    
                    
                }
            }
            
            
            
        }
        
        return count;
    }
};
