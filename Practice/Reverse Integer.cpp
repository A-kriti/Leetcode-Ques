// ques - https://leetcode.com/problems/reverse-integer/submissions/


class Solution {
public:
    int reverse(int x) {
        
        vector<int> v;
        
        bool negative=false;
        if(x<0){
            negative=true;
            x=abs(x);
        }
        
       
        while(x>=1){
            
            int y=x%10;
            v.push_back(y);
            
            x=x/10;
           
        }
            
      
        long int z=0;
            
       
        for(int i=0;i<v.size();i++){
            z+=(v[i]*pow(10,v.size()-i-1));
            if(z>=INT_MAX){
            return 0;
        }
        }
        
        if(negative==true){
            return -z;
        }
       
        return z;
        
        
    }
};
