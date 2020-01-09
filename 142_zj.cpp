/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 142_zj.cpp
 &Created Time: 19Century 2019年07月31日 星期三 14时39分52秒   CST  Day/212 and Week/30 of this year
 ************************************************/

#include<iostream>
using namespace std;
 
int judge(int n)
{
	int a = n / 10000;
	int b = (n / 1000) % 10;
	int c = (n / 100) % 10;
	int d = (n / 10) % 10;
	int e = n % 10;
	if (a == e&&b == d) return 1;
	else return 0;
}

inline bool is_prime(int x){
	if(x<=1)return false;
	for(int i=2;i*i<=x;i++){
		if(x%i==0)return false;
	}
	return true;
}
#define MAX_N 99999
int main(){
	long long a,b,arr[MAX_N];
	cin>>a>>b;
	for (int i = a; i <= b; i++){
		if (is_prime(i) && judge(i)){
		 printf("%lld ",i);
	    		
	    }
	}
		
    return 0;
}

