// ques - https://leetcode.com/problems/univalued-binary-tree/

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
    bool isUnivalTree(TreeNode* root) {
        
        set<int>s;
        preorder(root,s);
        
        return (s.size()==1)?1:0;
        
    }
    
    void preorder(TreeNode* root,set<int>&s){
        
        if(root==NULL)return;
        s.insert(root->val);
        preorder(root->left,s);
        preorder(root->right,s);
            
    }
};
