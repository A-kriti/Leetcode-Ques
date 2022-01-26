// ques - https://leetcode.com/problems/sort-integers-by-the-power-value/

class Solution {
public:
    
    static int power(int x){
        
        int c=0;
        while(x>1){
            if(x%2==0)x=x/2;
            else if(x%2!=0) x = 3 * x + 1;
            c++;
        }
        
        return c;
    }
    
    static bool cmp(pair<int,int>&a,pair<int,int>&b){
        
        if(a.second==b.second)return a.first<b.first;
        return a.second<b.second;
    }
    
    int getKth(int lo, int hi, int k) {
        
        vector<pair<int,int>>v;
        
        for(int i=lo;i<=hi;i++){
            v.push_back({i,power(i)});
        }
        
        sort(v.begin(),v.end(),cmp);
        
        int ans=v[k-1].first;

        return ans;
    }
};
