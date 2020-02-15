/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 237.cpp
 &Created Time: 19Century 2019年07月15日 星期一 19时06分17秒   CST  Day/196 and Week/28 of this year
 ************************************************/

void deleteNode(struct ListNode* node){
	struct ListNode *p=node->next;
	node->val=p->val;
	node->next=p->next;
	free(p);
	return ;
}
