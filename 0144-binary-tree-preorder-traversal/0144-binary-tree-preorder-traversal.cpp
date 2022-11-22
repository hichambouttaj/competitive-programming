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
    
    void preorder(vector<int> &rs, TreeNode* root){
        if(root == nullptr) return;
        
        rs.push_back(root->val);
        
        if(root->left) preorder(rs, root->left);
        if(root->right) preorder(rs, root->right);
    }
    
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> rs;
        preorder(rs, root);
        return rs;
    }
};