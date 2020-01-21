/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 324.cpp
*       &Created Time: 19Century 2019年08月22日 星期四 18时53分29秒 
*                          CST  Day/234 and Week/33 of this year
*       &Description:
*
*
***********************************************************/



#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
using namespace std;
#define MAX_N 500000

struct Data{
	int p,exd;
}arr[MAX_N+5];

struct UnionSet{
	int fa[MAX_N+5],val[MAX_N+5],size[MAX_N+5];
	void init(int n){
		for(int i=0;i<=n;i++){ 
			fa[i]=i;
			val[i]=0;
			size[i]=1;
		}
	}
	int get(int x){
		if(x==fa[x]){
			return x;
		}
		fa[x]=get(fa[x]);
		return fa[x];
	}
	void merge(int a,int b){
		fa[get(a)] =get(b);
	}
};

UnionSet u;
int main(){
	int n;
	cin>>n;
	char str[10];
	for(int i=0;i<n;i++){
		int a,b;
		cin>>str>>a>>b;
		switch(str[0]){
			case 'M': {
						  u.merge(a,b);
					  }break;
			case 'C':{
						 if(u.get(a)-u.get(b)){
							 cout<<-1<<endl;
						 }else{
							 cout<<abs(u.val[a]-u.val[b])-1<<endl;
						 }
					 }break;
		}
	}
	return 0;
}
