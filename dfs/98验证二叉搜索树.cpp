//二叉搜索树不一定是完全二叉树，左右子树不一定同时存在，只要满足 左子树（若存在）所有值<root<右子树（若存在）所有值 就是二叉搜索树。

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
    vector<int> v;
    void dfs(TreeNode* root)    //中序遍历,若是升序则是二叉搜索树
    {
        if(root==NULL)
            return;
        dfs(root->left);
        v.push_back(root->val);
        dfs(root->right);    
    }
    bool isValidBST(TreeNode* root) {
        dfs(root);
        bool result=true;
        int len=v.size();
        if(len==0||len==1)
            return true;
        
        for(int i=1;i<len;i++)
        {
            if(v[i]<=v[i-1])
                return false;
        }
        return true;
    }
    
};
