// ques - https://leetcode.com/problems/maximum-depth-of-binary-tree/submissions/

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
    int maxDepth(TreeNode* root) {
        
        if(root==NULL)return 0;
        
        int c1=maxDepth(root->left);
        int c2=maxDepth(root->right);
        
        return 1+max(c1,c2);
    }
};
