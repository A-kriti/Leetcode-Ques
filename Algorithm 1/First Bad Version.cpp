// ques - https://leetcode.com/problems/first-bad-version/

class Solution {
public:
    int firstBadVersion(int n) {
        
    int left=1;
    int right=n;   
        
    
    while(left<=right){
        
        int mid=left+(right-left)/2;
        
        int x=isBadVersion(mid);
      
        if(x==0){
         
            left=mid+1;
            
        }
        
        else{
            right=mid-1;
        }
         
    }
    return left;
   
    }
    
    
};
