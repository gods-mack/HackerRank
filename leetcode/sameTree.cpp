
// https://leetcode.com/problems/same-tree/

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
    
    bool check(TreeNode* p, TreeNode* q){
        if(p==nullptr and q==nullptr){
            return true;
        }
        if(p and q and p->val==q->val){
            return check(p->left,q->left) and check(p->right,q->right); 
        }
        return false;
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        return check(p,q);
        
    }
};