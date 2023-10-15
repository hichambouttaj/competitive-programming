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
private:
    vector<int> rs;
    
    void rightSideView(TreeNode* node, int level) {
        if(node == nullptr)
            return;
        
        if(level == (int)rs.size())
            rs.push_back(node->val);
        
        rightSideView(node->right, level + 1);
        rightSideView(node->left, level + 1);
        
    } 
    
public:
    vector<int> rightSideView(TreeNode* root) {
        rightSideView(root, 0);
        
        return rs;
    }
};