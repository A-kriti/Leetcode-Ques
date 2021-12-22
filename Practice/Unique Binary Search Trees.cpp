// ques - https://leetcode.com/problems/unique-binary-search-trees/


//Method 1
class Solution {
public:
    int numTrees(int n) {
        
        vector<int>v(n+1,0);
        v[1]=v[0]=1;
        
        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++){
                v[i]+=v[j]*v[i-j-1];
            }
        }
        
        return v[n];
    }
};

// Method 2
// using catalan formula = (2nCn/n+1)
// class Solution {
// public:
//     int numTrees(int n) {
//         int ans=fact(n)/(n+1);;
        
//         return ans;
//     }
    
//     long double fact(int x){
//         if(x==0) return 1;
        
//         long double f=1;
//         for(int i=1;i<=x;i++){
//             f*=x+i;
//             f/=i;
//         }
        
//         return f;
//     }
// };
