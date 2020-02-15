/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 107.cpp
 &Created Time: 19Century 2019年08月07日 星期三 10时42分52秒   CST  Day/219 and Week/31 of this year
 ************************************************/

int getDepth(struct TreeNode *root) {
    if (root == NULL) return 0;
    int d1 = getDepth(root->left);
    int d2 = getDepth(root->right);
    return fmax(d1, d2) + 1;
}

void getSize(struct TreeNode *root, int k, int *size) {
    if (root == NULL) return ;
    size[k] += 1;
    getSize(root->left, k - 1, size);
    getSize(root->right, k - 1, size);
    return ;
}

void getData(struct TreeNode *root, int **ret, int *size, int k) {
    if (root == NULL) return ;
    ret[k][size[k]++] = root->val;
    getData(root->left, ret, size, k - 1);
    getData(root->right, ret, size, k - 1);
    return ;
}

int** levelOrderBottom(struct TreeNode* root, int** columnSizes, int* returnSize) {
    if (root == NULL) return NULL;
    int n = getDepth(root);
    int **ret = (int **)malloc(sizeof(int *) * n);
    int *size = (int *)calloc(sizeof(int), n);
    getSize(root, n - 1, size);
    for (int i = 0; i < n; i++) {
        ret[i] = (int *)malloc(sizeof(int) * size[i]);
        size[i] = 0;
    }
    getData(root, ret, size, n - 1);
    *returnSize = n;
    *columnSizes = size;
    return ret;
}



}
