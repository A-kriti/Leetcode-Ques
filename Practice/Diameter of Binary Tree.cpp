// ques - https://leetcode.com/problems/diameter-of-binary-tree/submissions/

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
    int diameterOfBinaryTree(TreeNode* root) {
        
        if(root==NULL)return 0;
        
        
        int ans=0;
        MaxdepthOfBinaryTree(root,ans);
        
        return ans;
    }
    
    int MaxdepthOfBinaryTree(TreeNode* root,int &ans) {
        
        if(root==NULL)return 0;
        
        int c1=MaxdepthOfBinaryTree(root->left,ans);
        int c2=MaxdepthOfBinaryTree(root->right,ans);
        
        ans=max(ans,c1+c2);
        return 1+max(c1,c2);
    }
    
    
};
