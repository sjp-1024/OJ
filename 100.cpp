/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 100.cpp
 &Created Time: 19Century 2019年07月24日 星期三 11时47分16秒   CST  Day/205 and Week/29 of this year
 




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isSameTree(struct TreeNode* p, struct TreeNode* q){
   if(p==NULL && q==NULL) return true;
   if(p==NULL || q==NULL) return false;
   if(p->val !=q->val) return false;
    return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
}
