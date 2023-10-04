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
    vector<int> rightSideView(TreeNode* root) {
        if(root == nullptr)
            return {};

        vector<int> rs;
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()) {
            int sz = (int)q.size();
            
            for(int i = 0; i < sz; i++) {
                TreeNode *current = q.front();
                q.pop();
                
                if(i == sz - 1) {
                    rs.push_back(current->val);
                }
                
                if(current->left != nullptr)
                    q.push(current->left);
                if(current->right != nullptr)
                    q.push(current->right);
            }
        }
     
        return rs;
    }
};