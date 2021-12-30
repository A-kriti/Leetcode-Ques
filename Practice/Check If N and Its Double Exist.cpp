// ques - https://leetcode.com/problems/check-if-n-and-its-double-exist/

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        //method 1
        int n=arr.size();
        unordered_set<int>s;
        
        for(int i=0;i<n;i++){
            
            if(s.count(2*arr[i])>0 || ((arr[i]%2==0)) && s.count(arr[i]/2)>0)
                return true;

           s.insert(arr[i]);
        }
        
        return false;
        
        
        
        
        //method 2
// //         int n=arr.size();
// //         map<int,int>m;
        
// //         for(int i=0;i<n;i++){

// //             m[arr[i]]++;
// //         }
        
// //         for(auto x:m){
            
// //             if(x.first==0 && x.second>=2) return true;
// //         }
        
// //         for(int i=0;i<n;i++){
            
// //             if(arr[i]!=0){
// //                 if(m.find(2*arr[i])!=m.end()){
// //                 return true;
// //                 }
// //             }
            

// //         }
        
//         return false;
    }
};
