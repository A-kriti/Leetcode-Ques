// ques - https://practice.geeksforgeeks.org/problems/longest-common-prefix-in-an-array5129/1#

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        int min_l=arr[0].length();
        
        for(int i=1;i<N;i++){
            if(min_l>arr[i].length()){
                min_l=arr[i].length();
            }
             
        }
        
        string s;
        char c;
        bool check = true;
       
        int j=0;
        while(check && j<min_l){ 
            
            c=arr[0][j];
            for(int i=1;i<N;i++)
                if(arr[i][j]!=c)
                    check = false;
                
            if(check)s.push_back(c);
            j++;
                
        }
        
        return s.length()?s:"-1";
        
    }
};
