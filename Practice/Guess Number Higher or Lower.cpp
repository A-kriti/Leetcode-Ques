// ques - https://leetcode.com/problems/guess-number-higher-or-lower/

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        
        // method 1 (Binary Search)
        int left=0;
        int right=n;
        
        int ans;
        while(left<right){
            int mid=ceil(left+right/2);
            if(guess(mid)==0){
                ans=mid;
            return ans;
            }
            else if(guess(mid)==1){
                
                right=mid;
                
                }
            else{
                left=mid;
                
            }
        }
        
        
        
        return ans;
        
        // method 2
        
        /* while(n>0){
            if(guess(n)==0){
            return n;
            }
            if(guess(n)==1){
                n-=guess(n);
                }
            else{
                n+=guess(n);
            }
        }
        
        
        
        return n;*/
    }
};
