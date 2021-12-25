// ques - https://leetcode.com/problems/find-the-student-that-will-replace-the-chalk/

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        // Method 1
        int n=chalk.size();
        
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=chalk[i];
        }
        
        k=k%sum;
        
        for(int i=0;i<n;i++){
            
            if(k<chalk[i]) return i;
            
            k-=chalk[i];
        }
        
        
        return 0;
        
        
        // Method 2
        //k %= accumulate(begin(chalk), end(chalk), 0l);
        
//         int i=0;
        
            
//         while(k>=chalk[i]){
                
//             k-=chalk[i]; 
//             i++;
               
//         }
       
        
//         return i;
    }
};
