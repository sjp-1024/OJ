/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 206.cpp
 &Created Time: 19Century 2019年07月15日 星期一 18时47分41秒   CST  Day/196 and Week/28 of this year
 ************************************************/

struct ListNode* reverseList(struct ListNode* head){
	struct ListNode ret,*p=head,*q;
	ret.next=NULL;
	while(p){
		q=p->next;
		p->next=ret.next;
		ret.next=p;
		p=q;
	}
	return ret.next;
}
