class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        //Method 1 (Binary Search)
        
        int t=target - '0';
        int n=letters.size();
        int left=0;
        int right=n;
        string ans="";
        
        while(left<=right){
            int mid=(left+right)/2;
            int y=letters[mid]-'0';
            if(y>t){
                ans=letters[mid];
                right = mid-1;
            }
            
            else{
                left=mid+1; 
            }
           
        }
        if(ans.size()>0)return ans[0];
        return letters[0];
        
        //Method 2
        
//         int t=target - '0';
        
//         for(char x:letters){
            
//             int y=x-'0';
//             if(y>t)return x;
//         }
        
//         return letters[0];
    }
};