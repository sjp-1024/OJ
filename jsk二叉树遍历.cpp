/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: jsk二叉树遍历.cpp
 &Created Time: 19Century 2019年07月23日 星期二 16时34分38秒   CST  Day/204 and Week/29 of this year
 ************************************************/

#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *lchild, *rchild;
}Node;

Node* init(int data) {
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;
    node->lchild = NULL;
    node->rchild = NULL;
    return node;
}

void preorder(Node *node) {
    printf("%d ", node->data);
    if (node->lchild) 
		preorder(node->lchild);
    if (node->rchild)
		preorder(node->rchild);
}

void inorder(Node *node) {
    if (node->lchild)
		inorder(node->lchild);
    printf("%d ", node->data);
    if (node->rchild) inorder(node->rchild);
}

void postorder(Node *node) {
    if (node->lchild) postorder(node->lchild);
    if (node->rchild) postorder(node->rchild);
    printf("%d ", node->data);
}

Node* build_demo() {
    Node *node[8];
    for (int i = 1; i <= 7; i++) {
        node[i] = init(i);
    }
    node[4]->lchild = node[2];
    node[4]->rchild = node[6];
    node[2]->lchild = node[1];
    node[2]->rchild = node[3];
    node[6]->lchild = node[5];
    node[6]->rchild = node[7];
    return node[4];
}

void clear(Node *node) {
    if (node->lchild) {
        clear(node->lchild);
    }
    if (node->rchild) {
        clear(node->rchild);
    }
    free(node);
}
int main() {
    Node *node = build_demo();
    preorder(node);
    printf("\n");
    inorder(node);
    printf("\n");
    postorder(node);
    printf("\n");
    clear(noe);
    return 0;
}


