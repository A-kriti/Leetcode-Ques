// ques - https://leetcode.com/problems/count-primes/submissions/


class Solution {
public:
    
    // metod 1 Sieve of Eratosthenes
    
    
    int countPrimes(int n) {
        
        if(n==0 || n==1)return 0;
        int t[n+1];
        t[0]=0;
        t[1]=0;
        for(int j=2;j<n;j++){
            t[j]=1;
        }
        
        
        for(int j=2;j<sqrt(n);j++){
            if(t[j]==1){
                for(int i=2;j*i<n;i++){
                    t[j*i]=0;
                }
            }
        }
        
        int ans=0;
        for(int j=2;j<n;j++){
            ans+=t[j];
        }
        
        return ans;
    }
    
    
    
    // method 2
    /*bool isprime(int x){
        
        if(x==0 || x==1){
            return false;
        }
        
       if(x==2 || x==3){
            return true;
        }
        
        
        
        int c=0;
        int y=pow(x,0.5);
        for(int i=2;i<=y;i++){
            
            if(x%i==0){
               c++; 
                return false;
            }
            
        }
        
        return true;
    }
    
    int countPrimes(int n) {
        
        
        int t=0;
        int j;
        for(j=2;j<n;j++){
            if(isprime(j)){
                t++;
            }
        }
        
        
        return t;
    }*/
};
