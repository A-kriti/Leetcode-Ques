// ques - https://leetcode.com/problems/rank-transform-of-an-array/

class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        
        //method 1
        int n=arr.size();
        set<int>s(arr.begin(),arr.end());
        map<int,int>m;
        
        int q=1;
        for(auto x:s){
            m[x]=q;
            q++;
        }
        
        for(int i=0;i<n;i++){
            arr[i]=m[arr[i]];
        }
       
        return arr;
        
        
        
        //method 2
        
//         priority_queue<int,vector<int>,greater<int>>p;
        
//         int n=arr.size();
        
//         map<int,int>m;
        
//         for(int x:arr){
//             p.push(x);
//         }
            
//         int i=1;
//         for(int x:arr){
            
//             int y=p.top();
            
//             if(m.find(y)==m.end()){
//                 m[y]=i;
//                 i++;
//             }
            
//             p.pop();
//         }
        
//         for(int i=0;i<n;i++){
//             arr[i]=m[arr[i]];
//         }
        
//         return arr;

    }
};
