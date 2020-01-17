/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 270-1.cpp
*       &Created Time: 19Century 2019年09月03日 星期二 15时53分46秒 
*                          CST  Day/246 and Week/35 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
using namespace std;

#define MAX_N 300000

int num_b[MAX_N+5],head,tail;
int arr[MAX_N+5];


int main(){
	int n,m,ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
		head=tail=0;
		num_b[tail++]=0;
		ans=arr[1];
		for(int i=1;i<=n;i++){
			ans=max(ans,arr[i]-arr[num_b[head]]);
			while(tail-head && arr[num_b[tail-1]]>=arr[i]) tail--;
			num_b[tail++]=i;
			if(num_b[head]==i-m) head++;
	}
		cout<< ans<<endl;
		return 0;
}
