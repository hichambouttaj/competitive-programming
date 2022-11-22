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
    int maxDepth(TreeNode* root) {
        int depth = 1;
        
        if(!root) return 0;
        
        if(root->left){
            depth = max(depth, 1 + maxDepth(root->left));
        }
        if(root->right){
            depth = max(depth, 1 + maxDepth(root->right));
        }
        return depth;
    }
};