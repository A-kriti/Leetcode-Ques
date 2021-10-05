// ques - https://leetcode.com/problems/plus-one/submissions/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        
        int n=digits.size();
        
        
        for(int i=n-1;i>=0;i--){
            
            if(digits[i]!=9){
                digits[i]+=1;
                return digits;
                
            }
            
            else if(digits[i]==9 && i==0){
                
                digits[i]=0;
                digits.emplace(digits.begin(),1);
                return digits;
                
            }
            
            else if(digits[i]==9 && i>0){
                
                digits[i]=0;
            }
            
        }
        
        
        return digits;
        
        
        
         /*int n=digits.size();
        
        long int t=0;
        for(int i=0;i<n;i++){
            t+=digits[i]*pow(10,n-i-1);
        }
        
        t=t+1;
        
        vector<int> ans;
        
        while(t>0){
            
            ans.push_back(t%10);
            t=t/10;
        }
        
        reverse(ans.begin(),ans.end());
        
        return ans;
        */
    }
};
