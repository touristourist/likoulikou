//递归方法判断对称二叉树 
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
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;   //当整棵树是空树时，是对称的 
        return judgeSym(root->left,root->right);
    }
    
    bool judgeSym(TreeNode* le,TreeNode* ri){    //判断两支子树是否是镜像对称的递归函数 
    	if(le==NULL&&ri==NULL) return true;
    	else if (le!=NULL&&ri!=NULL){
    		return (le->val==ri->val)&&judgeSym(le->right,ri->left)&&judgeSym(le->left,ri->right);
    	}
    	else return false;          //一支null另一支不null 
    }
};
