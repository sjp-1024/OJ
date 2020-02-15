/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 142.cpp
 &Created Time: 19Century 2019年07月15日 星期一 14时38分37秒   CST  Day/196 and Week/28 of this year
 ************************************************/

struct ListNode *detectCycle(struct ListNode *head){
	struct ListNode *p=head,*q=head;
	while(q){
	p=p->next;
	q=q->next;
	if(q==NULL) return NULL;
	q=q->next;
	if(p=q) break;
	}
	if(q==NULL) return NULL;
	q=head;
	while(p!=q){
	p=p->next;
	q=q->next;
	}
return p;
}
