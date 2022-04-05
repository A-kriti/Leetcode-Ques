// ques - https://leetcode.com/problems/kth-smallest-element-in-a-sorted-matrix/

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        
        priority_queue<int, vector<int>,greater<int>>p;
        
        int n=matrix.size();
        int m=matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                p.push(matrix[i][j]);
            }
        }
        
        while(k-1){
            p.pop();
            k--;
        }
        
        return p.top();
    }
};
