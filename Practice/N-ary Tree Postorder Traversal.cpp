// ques - https://leetcode.com/problems/n-ary-tree-postorder-traversal/

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
//     vector<int> postorder(Node* root) {
        
//     }
    void postorderv(Node* root, vector<int> &v){
        
            if(!root)return;
        
            for(Node* child : root -> children){
                
                postorderv(child,v);
             }
            int t=root->val;
            v.push_back(t);
       
    }
    
    vector<int> postorder(Node* root) {
        
        vector<int>v;
        postorderv(root,v);
        return v;
    }
    
};
