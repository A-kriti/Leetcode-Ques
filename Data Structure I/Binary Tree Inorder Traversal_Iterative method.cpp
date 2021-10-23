// ques - https://leetcode.com/problems/binary-tree-inorder-traversal/

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
    vector<int> inorderTraversal(TreeNode* root) {
        
        
        vector<int>v;
        if(!root)return v;
        
        stack<TreeNode*>s;
        s.push(root);
        
        while(!s.empty()){
            
            TreeNode* x=s.top();
            
            if(x->left!=NULL){
                
                s.push(x->left);
                x->left=NULL;
            }
            
            else{
                v.push_back(x->val);
                s.pop();
                
                if(x->right!=NULL){
                    
                    s.push(x->right);
                    x->right=NULL;
                }   
            }    
        }
        
        return v;
        
        
        
    }
};
