// ques - https://leetcode.com/problems/valid-perfect-square/

class Solution {
public:
    bool isPerfectSquare(int num) {
        
        //method 1
        if(num==0 || num==1) return true;
        
        int left=0;
        int right=num;
        while(left<=right){
            
            
            long mid=(left+right)/2;
            
            if(mid*mid==num)return true;
            
            
            else if(mid*mid>num){
                right=mid-1;
            }
            
            else if(mid*mid<num){
                
                left=mid+1;
            }
                   
        }
        
        return false;
        
        //method 2
//         int m=1;
//         while(num>0){
            
//             num-=m;
//             m+=2;
//         }
        
//         return num==0;
        
        
        
    }
};
