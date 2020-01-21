/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 328.cpp
*       &Created Time: 19Century 2019年08月23日 星期五 19时03分22秒 
*                          CST  Day/235 and Week/33 of this year
*       &Description:
*
*
*       树状数组 
*
*
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 200000

int c[MAX_N+5];

inline int lowbit(int x){
	return x&(-x);
}
void add(int x,int val,int n){
	while(x<=n) c[x]+=val,x+=lowbit(-x);
}
int query (int x){
	int sum=0;
	while(x) sum+=c[x],x-=lowbit(x);
	return sum;
}


int main(){
	int n,a;
	int ans1=0,ans2=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		int val1=query(a);
		int val2=(a-1-val1);
		int val3=(i-1-val1);
		int val4=(n-a-val3);
		ans1+=val1 *val2;
		ans2+=val3 *val4;
		add(a,1,n);

	}
	cout<<ans2<<" "<<ans1<<endl;
	return 0;
}
