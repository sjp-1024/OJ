/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 310.cpp
*       &Created Time: 19Century 2019年08月31日 星期六 20时11分42秒 
*                          CST  Day/243 and Week/34 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
using namespace std;

#define MAX_N 1000000

int primes[MAX_N+5];
int is_prime[MAX_N+5];
int cnt=0;

void getprime(int n){
	for(int i=2;i<=n;i++){
		if(!is_prime[i]) primes[cnt++]=i;
		for(int j=0;primes[j]*i<=n;j++){
			is_prime[primes[j]*i]=1;
			if(i%primes[j]==0) break;
		}
	}
}

int main(){
	int n;
	cin>>n;
	getprime(n);
	for(int i=0;i<cnt;i++){
		int p=primes[i];
		int x=0,N=n;
		while(t){
			x+=N/p,	N/=p;
		}//bs   floor(N/p)
		printf("%d %d\n",p,x);
	}
	return 0;
}


