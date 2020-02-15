/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 24.cpp
 &Created Time: 19Century 2019年06月30日 星期日 20时31分01秒   CST  Day/181 and Week/26 of this year
 ************************************************/



struct ListNode*swapPairs(struct ListNode* head){
   struct ListNode ret,*p=&ret,*q=head;
   ret.next=head;
   while(q&&q->next){
	   p->next=q->next;
	   q->next=p->next->next;
	   p->next->next=q;
	   p=q;
	   q=q->next;
   }
   return ret.next;
}
