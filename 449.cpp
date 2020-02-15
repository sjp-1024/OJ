/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 449.cpp
*       &Created Time: 20Century 2020年01月10日 星期五 22时56分28秒 
*                          CST  Day/010 and Week/01 of this year
*       &Description:
***********************************************************/


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string res;
        dfs_s(root,res);
        return res;
    }
    void dfs_s(TreeNode* root, string& res){
        if(!root){
            res+="null ";
            return ;
        }
        res+=to_string(root->val)+' ';
        dfs_s(root->left,res);
        dfs_s(root->right,res);
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int u=0;
        return dfs_t(data, u);
    }
    TreeNode* dfs_t(string data, int& u){
        if(u==data.size())return NULL;
        int k=u;
        while(data[k]!=' ')k++;
        if(data[u]=='n'){
            u=k+1;
            return NULL;
        }
        int m=1,val=0;
        if(u<k&&data[u]=='-')m=-1,u++;
        for(int i=u;i<k;i++)val=val*10+data[i]-'0';
        val*=m;
        u=k+1;
        auto root=new TreeNode(val);
        root->left=dfs_t(data,u);
        root->right=dfs_t(data,u);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));
