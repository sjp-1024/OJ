/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 111.cpp
 &Created Time: 19Century 2019年08月07日 星期三 14时56分48秒   CST  Day/219 and Week/31 of this year
 ************************************************/

int minDepth(struct TreeNode* root) {
    if (root == NULL) return 0;
    if (root->left == NULL && root->right == NULL) return 1;
    if (root->left == NULL || root->right == NULL)
        return minDepth(root->right ? root->right : root->left) + 1;
    return fmin(minDepth(root->left), minDepth(root->right)) + 1;
}
