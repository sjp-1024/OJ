/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 83.cpp
 &Created Time: 19Century 2019年06月30日 星期日 20时51分37秒   CST  Day/181 and Week/26 of this year
 ************************************************/




struct ListNode* deleteDuplicates(struct ListNode*head){
	struct ListNode *p=head,*q;
	while(p&&p->next){
		while(p->next&&p->val==p->next->val){
			q=p->next;
			p->next=p->next->next;
			p->next=q;
		}else{
			p=p->next;
		}
		p=p->next;
	}
	return head;
}
