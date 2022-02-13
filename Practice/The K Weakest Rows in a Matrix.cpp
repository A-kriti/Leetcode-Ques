// ques - https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

// Method 1 (Using Vector<pair>)

class Solution {
public:
    static bool cmp(pair<int,int>&a, pair<int,int>&b){
        if(b.second==a.second)return a.first<b.first;
        return b.second>a.second;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n=mat.size();
        int m=mat[0].size();
        vector<pair<int,int>>v;
        
        for(int i=0;i<n;i++){
            int t=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)t++;
            }
            v.push_back({i,t});
        }
        sort(v.begin(),v.end(),cmp);
        
        vector<int>ans;
        
        for(int i=0;i<k;i++){
            ans.push_back(v[i].first);
        }
        
        return ans;
        
    }
};

//Method 2 (Using Priority Queue)

class Solution {
public:
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n=mat.size();
        int m=mat[0].size();
        
        //Min Heap
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
        
        for(int i=0;i<n;i++){
            int t=0;
            for(int j=0;j<m;j++){
                if(mat[i][j]==1)t++;
            }
            p.push({t,i});
        }
        
        vector<int>ans;
        
        for(int i=0;i<k;i++){
            ans.push_back(p.top().second);
            p.pop();
        }
        
        return ans;
        
    }
};
