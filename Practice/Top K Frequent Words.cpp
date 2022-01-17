// ques - https://leetcode.com/problems/top-k-frequent-words/

class Solution {
public:
    static bool cmd(pair<int,string>&a ,pair<int,string>&b){
        
        return (a.first!=b.first)?b.first>a.first : b.second<a.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        unordered_map<string,int>m;
        for(string x:words){
            m[x]++;
        }
        vector<pair<int,string>>v1;
        
        for(auto it:m){
            v1.push_back({it.second,it.first});
        }
        sort(v1.begin(),v1.end(),cmd);
        
        vector<string>v;
        int i=v1.size()-1;
        
        while(i>=0 && k>0){
            v.push_back(v1[i].second);
            k--;
            i--;
        }
        
        
        return v;
    }
};
