/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    int value;
private:
    int help(TreeNode* root)
    {
        if(!root)
            return NULL;
        
        int left=max(0,help(root->left));
        int right=max(0,help(root->right));
        value=max(value,left+right+root->val);   //记录最大值
        return max(left,right)+root->val;   //返回上层节点时，只能返回一个孩子，因为是一条路径呀
        
    }
public:
    int maxPathSum(TreeNode* root) {
        value=INT_MIN;
        help(root);
        return value;
    }
};
