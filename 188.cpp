/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 188.cpp
 &Created Time: 19Century 2019年07月26日 星期五 21时49分47秒   CST  Day/207 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
inline bool is_prime(int x){
	if(x<=1) return false;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}
int main(){
	int n,m,i;
	cin>>n>>m;
	for(int i=m;i<=n;i++){
	   if(is_prime(i))
		printf("%d\n",i);
	}

	return 0;
}
