/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 234.cpp
 &Created Time: 19Century 2019年07月15日 星期一 18时56分05秒   CST  Day/196 and Week/28 of this year
 ************************************************/

struct ListNode *reverse(struct ListNode *head){
	struct LostNode ret,*p=head,*q;
	ret.next=NUll;
	while(p){
		q=p->next;
		p->next
	}
}







bool isPalindrome(struct ListNode* head){
	
     int len=get_length(head);
	 struct ListNode *P=head,*q=reverse(get_node(head,len+1)/2);
	 while(q){
		 if(p->val-q->val) return false;
		 p=p->next;
		 q=q->next;
	 }
	 return true;
}

