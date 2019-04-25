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
public:
	
    bool hasPathSum(TreeNode* root, int sum) {       hasPathSum(r,s)表示在r节点处，还剩余s没减完
    
    	if(root==NULL) return false;                                       //判断题目给的是空链表情况，以及当遍历到NULL的分支
        sum-=root->val;                                                  //既然给了sum，直接用局部变量sum不断减，直至减为零
        if(root->left==NULL&&root->right==NULL&&sum==0) return true;       //到叶子才判断
        return hasPathSum(root->left,sum)||hasPathSum(root->right,sum); 
    }
    
};
