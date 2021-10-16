// ques - https://leetcode.com/problems/binary-tree-preorder-traversal/

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
// method 1 recursion

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>ans;
        print(root,ans);
        return ans;
    }
    
    void print(TreeNode* root,vector<int>&ans){
        if(root==NULL)return;
        ans.push_back(root->val);
        print(root->left,ans);
        print(root->right,ans);
        
    }
};


// method 2 iteration

/*class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        vector<int> ans;
        if(!root)return ans;
        
        stack<TreeNode*>s;
        
        while(root!=NULL || !s.empty()){
            
            while(root!=NULL){
                ans.push_back(root->val);
                s.push(root);
                root=root->left;
                
            }
            
            root=s.top();
            s.pop();
            root=root->right;
        }
        
        return ans;
    }
};*/
