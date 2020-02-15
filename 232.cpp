/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: x.cpp
 &Created Time: 19Century 2019年07月17日 星期三 19时03分51秒   CST  Day/198 and Week/28 of this year
 ************************************************/

typedef struct {
	int *data;
	int top;
}MyStack;
Mystack* myStackCreate(int maxSize){
	MyStack *s=(MyStack*)malloc(sizeof(MyStack));
	s->data=(int *)malloc(sizeof(int )*maxSize);
	s->top=-1;
	return s;
}

void mySt0ckPush(MyStack* obj,int x){
	obj->data[++(obj->top)]=x;
}

int myStackPop(MyStack* obj){
	return obj->data[(obj->top)--];
}

int myStackTop(MyStack* obj){
	return obj->data[obj->top];
}

bool myStacketEmpty(MyStack* obj){
	return obj->top==-1;

}

void myStackFree(Mystack* obj){
	free(obj->data);
	free(obj);
}

typedef struct{

}









int myStackPop(MyStack * obj){
	MyQueue *p=myQueueEmpty(obj->q1)? obj->q2:obj->q1;
	Myqueue *q=myQueueEmpty(obj->q1)? obj->q1:obj->q2;
	int element;
	while(!myQueueEmpty(p)){
		element=myQueueFront(p);
		myQueue(p);
		myQueuePush(Q,element);
	}
	return element;
}


