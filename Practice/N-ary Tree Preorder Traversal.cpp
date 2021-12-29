// ques - https://leetcode.com/problems/n-ary-tree-preorder-traversal/

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
    
    
     void preorderv(Node* root, vector<int> &v){
        
            if(!root)return;
        
            int t=root->val;
            v.push_back(t);
        
            for(Node* child : root -> children){
                
                preorderv(child,v);
     
            }
            
       
    }
    
    vector<int> preorder(Node* root) {
        
        vector<int>v;
        preorderv(root,v);
        return v;
    }

   
    
};
