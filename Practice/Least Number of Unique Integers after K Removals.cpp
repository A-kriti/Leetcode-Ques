// ques - https://leetcode.com/problems/least-number-of-unique-integers-after-k-removals/

class Solution {
public:
    
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        
        map<int,int>m;
        priority_queue<int,vector<int>,greater<int>>q;
        
        for(int x:arr){
            m[x]++;
        }
        
        for(auto x:m){
            q.push(x.second);
        }
        
        while(k>=0 && !q.empty()){
            k-=q.top();
            if(k<0)break;
            q.pop();   
        }
        
        return q.size();
    }
};
