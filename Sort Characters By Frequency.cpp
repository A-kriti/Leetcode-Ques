// ques - https://leetcode.com/problems/sort-characters-by-frequency/

class Solution {
public:
    
    static bool cmd(pair<char,int>&a,pair<char,int>&b){
        return b.second>a.second;
    }
    
    string frequencySort(string s) {
        
        map<char,int>m;
        for(char x:s){
            m[x]++;
        }
        
        vector<pair<char,int>>v;
        
        for(auto x:m){
            v.push_back(make_pair(x.first,x.second));
            
        }
        
        sort(v.begin(),v.end(),cmd);
        string ans="";
        for(int i=v.size()-1;i>=0;i--){
            
            int z=v[i].second;
            while(z){
                ans+=v[i].first;
                z--;
            }
        }
        
        return ans;
        
    }
};
