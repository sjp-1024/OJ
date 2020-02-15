/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 141.cpp
 &Created Time: 19Century 2019年07月15日 星期一 14时27分43秒   CST  Day/196 and Week/28 of this year
 ************************************************/
bool hasCycle(struct ListNode *head){
struct ListNode *p=head,*q=head;
while(q){
	p=p->next;
	q=q->next;
	if(q==NULL) return false;
	q=q->next;
	if(p==q) return true;
}
return false;

}
