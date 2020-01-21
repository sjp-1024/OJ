/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 330.cpp
*       &Created Time: 19Century 2019年08月23日 星期五 19时54分32秒 
*                          CST  Day/235 and Week/33 of this year
*       &Description:c++ 
*
*
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 100000
#define lowbit(x) (x & (-x))

struct TreeArray{
	int n,c[MAX_N+5];
	void init(int n){
		this->n=n;
		memset(c,sizeof(int) *(n+1));
	}
	void add(int x,int val){
		while(x<=n) c[x]+=val,x+=lowbit(x);
	}
	long long query(int x){
		long long sum=0;
		while(x) sum+=c.[x].x-=
	}


};

int main(){
	int n,m,pre=0,now;
	cin>>n>>m;
	b.init(n),B.init(n);
	for(int i=1;i<=n;i++)


		while(m--){
			switch(str[0]){
				case 'C':{
					long long l,r,c;
					cin>>l>>r>>c;
					b.add(l.c);
					b.add(r+1,-c);
					B.add(l,l*c);
					B.add(r+1,-(r+1)*c);		 
			}break;
				case 'Q':{
					long long l,r;
					cin>>l>>r;
					l-=1;
					long long sr=(r+1) *b.query(r)-B.query(r);
					long long sl=(l+1) *b.query(l)-B.query(l);
					cout<<sr-sl<<endl;
						 }break;
			}
		}
return 0;
}


