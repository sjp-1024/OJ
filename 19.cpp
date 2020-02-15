/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 19.cpp
 &Created Time: 19Century 2019年06月30日 星期日 20时17分04秒   CST  Day/181 and Week/26 of this year
 ************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
struct LisrNode* removeNthFromEnd(struct ListNode* head,int n){
	struct ListNode ret,*p=&ret,*q=head;
	ret.next=head;
	while(n--)q=q->next;
	while(q)p=p->next,q=q->next;
	q=p->next->next;
	free(p->next);
	p->next=q;
}
	return ret.next;
}
