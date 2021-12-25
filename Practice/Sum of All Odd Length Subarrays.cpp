//link - https://leetcode.com/problems/sum-of-all-odd-length-subarrays/

class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        
        int n = arr.size();
        int sum;
        
        int psum =0;
        vector<int> psumvector;
        
        for (int i=0; i<n; i++){
            psum = psum + arr[i];
            psumvector.push_back(psum);
        }
        
        if (n<=2){
            
            return psumvector[n-1];
            
            
        }
        
        //int sum = 2*psumvector[n-1];
        if(n%2!=0){
            
             sum = 2*psumvector[n-1];
            
        }
        
        else{
            
            sum = psumvector[n-1];
        }
        
        
        
        for (int i=2; i<n-1; i++){
            
            if (i%2==0){
                
                
                int t=psumvector[i];
                for (int j=i+1; j<n; j++){
                    
                    t = t + psumvector[j]-psumvector[j-i-1];
                  
                }
                sum = sum + t;
                
            }
            
        }
        
        return sum;
        
     
    }
};
