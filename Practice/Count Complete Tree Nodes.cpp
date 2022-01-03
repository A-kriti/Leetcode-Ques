// ques - https://leetcode.com/problems/count-complete-tree-nodes/

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
    int countNodes(TreeNode* root) {
        
        int c=0;
        preorder(root,c);
        
        return c;
    }
    
    int preorder(TreeNode* root,int &c){
        
        if(root==NULL)return 0;
        
        preorder(root->left,c);
        c++;
        preorder(root->right,c);
        
        return c;
    }
};
