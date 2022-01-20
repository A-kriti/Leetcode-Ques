// ques - https://leetcode.com/problems/distribute-candies/

class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        sort(candyType.begin(),candyType.end());
        int n=candyType.size();
        int t=candyType[0];
        int c=1;
        for(int i=1;i<n;i++){
            if(t!=candyType[i]){
                c++;
                t=candyType[i];
            }
        }
        
        return c<=n/2?c : n/2;
        
        
//         int n=candyType.size();
//         map<int,int>m;
//         for(int x:candyType){
//             m[x]++;
//         }
        
//         return m.size()<=n/2?m.size() : n/2;
        
    }
};
