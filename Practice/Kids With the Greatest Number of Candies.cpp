// ques - https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int max_candy=*max_element(candies.begin(),candies.end());
        
        int n=candies.size();
        
        vector<bool>v;
        
        for(int i=0;i<n;i++){
            
            if(candies[i]+extraCandies >=max_candy){
                v.push_back(1);
            }
            else v.push_back(0);
        }
        return v;
    }
};
