/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 287.cpp
        &Created Time: 19Century 2019年08月12日 星期一 19时00分15秒 
                           CST  Day/224 and Week/32 of this year
        &Description:


 ************************************************/

#include <algorithm>

#include<iostream>
#include<queue>
#include<cstdlib>
#include<cstdio>
#include<cmath>
using namespace std;

struct cmp{
	bool operator()(int a,int b){
		return a>b;
	}
}

priority_queue<int,vector<int>,cmp>q;

int main(){
	int n,a,sum=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a,q.push(a);
	}
	for(int i=1;i<n;i++){
		int val1=q.top();q.pop();
		int val2=q.top();q.pop();
		q.push(val1+val2);
		sum+=val1+val2;
	}
	cout<<sum<<endl;
	return 0;
}
