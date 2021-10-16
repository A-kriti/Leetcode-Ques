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

// Method 1 Recursion

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>ans;
        print(root,ans);
        return ans;
    }
    
    
    void print(TreeNode* root,vector<int>& ans){
        
        if(root==NULL)return;
        print(root->left,ans);
        ans.push_back(root->val);
        print(root->right,ans);
        
    }
};

// Method 2 Iteration

/*class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        
        vector<int>ans;
        if(!root)return ans;
        stack<TreeNode*>s;
        s.push(root);
        
        while(!s.empty()){
            
            TreeNode* x=s.top();
            if(x->left!=NULL){
                s.push(x->left);
                x->left=NULL;
            }
            
            else{
                
                ans.push_back(x->val);
                s.pop();
                
                if(x->right){
                    s.push(x->right);
                }
            }
        }
        
        return ans;
        
    }
};*/
