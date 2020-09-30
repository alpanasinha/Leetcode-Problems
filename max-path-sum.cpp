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
    int solve(TreeNode* root , int &ans){
        if(root==NULL) return 0;
        
        int l = solve(root->left , ans);
        int r = solve(root->right , ans);
        
        int m1 = max(root->val , max(l , r ) + root->val);
        
        int m2 = max(m1 , root->val + l + r);
        
        ans = max(ans , m2);
        
        return m1;
    }
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        int temp = solve(root , ans );
        
        return ans;
        
    }
};

