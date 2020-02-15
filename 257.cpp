
int getPathCnt(struct TreeNode *root){
	if(root==NULL) return 0;
	if(root->left==NULL  &&  root->right==NULL) return 1;
	return getPathCnt(root->left)+getPathCnt(root->right);
}

int getPathLen(struct TreeNode *root,int len,int k,int *pathLen){

}


	int pathCnt =getPathCnt(root);
	char **ret=(char **)malloc (sizeof(char *)*pathCnt);
	int *pathLen=(int *)malloc (sizeof(int)* pathCnt);
	getPathLen(root,0,0,pathLen);

