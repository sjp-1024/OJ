/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 203.cpp
 &Created Time: 19Century 2019年07月15日 星期一 18时33分48秒   CST  Day/196 and Week/28 of this year
 ************************************************/

struct ListNode* removeElements(struct ListNode* head,int val){
	struct ListNode ret,*p=&ret,*q;
	ret.next=head;
	while(p&&p->next){
		if(p->next->val==val){
			q=p->next;
			p->next=p->next->next;
			free(q);
		}else{
			p=p->next;
		}
	}
	return ret.next;
}
