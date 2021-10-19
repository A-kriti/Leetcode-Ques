// ques - https://leetcode.com/problems/minimum-depth-of-binary-tree/submissions/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        
        if(root==NULL)return 0;
        int x=minDepth(root->left);
        int y=minDepth(root->right);
        
        if(x==NULL){
            return 1+max(x,y);
        }
        
        else if(y==NULL){
            return 1+max(x,y);
        }
       
        return 1+min(x,y);
        
    }
};
