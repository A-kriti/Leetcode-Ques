// ques - https://leetcode.com/problems/count-square-sum-triples/

class Solution {
public:
    int countTriples(int n) {
        
        map<int,int>m;
        for(int i=1;i<=n;i++){
            m[pow(i,2)]++;
        }
        
        int c=0;
        
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                if(m.find(abs(i-j)*(i+j))!=m.end())c++;
            }
        }
        
        return c;
    }
};
