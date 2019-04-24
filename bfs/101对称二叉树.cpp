//使用queue和层序比较的思想，对于第一次放入的两个root，前一个是从左向右，后一个是从右向左

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
        if(root==NULL) return true;
        queue<TreeNode*> q;
        q.push(root);
        q.push(root);
        while(!q.empty()){
        	TreeNode* ll=q.front(); q.pop();
        	TreeNode* rr=q.front(); q.pop();
        	if(ll==NULL&&rr==NULL)  continue;     //因为之前push的可能是null
            else if (ll!=NULL&&rr!=NULL){           
                if(ll->val!=rr->val) return false;
            }     
            else return false;    //一个null，另一个不是null
        	q.push(ll->left);  q.push(rr->right);   //将镜像中两个要比较相等的项放一起 
        	q.push(ll->right); q.push(rr->left);
        }
        return true;
    }
};



