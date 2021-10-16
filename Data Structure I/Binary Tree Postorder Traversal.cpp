// ques - https://leetcode.com/problems/binary-tree-postorder-traversal/


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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        print(root,ans);
        return ans;
    }
    
    void print(TreeNode* root,vector<int>&ans){
        if(root==NULL)return;
        print(root->left,ans);
        print(root->right,ans);
        ans.push_back(root->val);
        
    }
};
