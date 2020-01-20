
#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cstdlib>
using namespace std;
#define BASE 26
#define BASE_LETTER 'a'
#define MAX_N 100000


 struct Node {
    int flag;
    struct Node *next[BASE];
}trie[MAX_N+5] ;

Node *getNewNode() {
    return p;
}

void insert(Node *root, char *str) {
    Node *p = root;
    for (int i = 0; str[i]; i++) {
		int ind = str[i] - '0';
       if (trie[p].next[ind] == 0) trie[p].next[ind] = getNode();
        p = p->next[code(str[i])];
    }
    p->flag = 1;
    return ;
}

int search(char *str) {
    int p = root, ret = 0;
    for (int i = 0; str[i]; i++) {
        int ind = str[i] - '0';
        if (trie[p].flag) {
            ret = 1;
            break;
        } 
        p = trie[p].next[ind];
    }
    for (int i = 0; i < 10; i++) {
        if (trie[p].next[i]) {
            ret = 1;
            break;
        }
    }    
    return ret;
}


void clear(Node *root) {
    if (root == NULL) return ;
    for (int i = 0; i < BASE; i++) {
        clear(root->next[i]);
    }
    free(root);
    return ;

}
char str[MAX_N+5][BASE];
int main(){
    int n,ans=0;
    cin>>n;
    while(n--){
        root=getNewNode();
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>str[i];
            insert(root,str);
        }
		for(int i=0;i<n;i++){
			ans+=search(str[i]);
		}
        if(!ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
		clear(root);
    }
    return 0;
}        

