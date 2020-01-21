/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 311.cpp
*       &Created Time: 19Century 2019年10月04日 星期五 23时07分51秒 
*                          CST  Day/277 and Week/39 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
#define ll long long 
#define MAX_N 10000000
ll arr[MAX_N+5];

inline bool  is_prime(ll n){
	if(n<=1) return false;
	for(int i=2;i*i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}

ll  gcd(ll a,ll b){
	return (b? gcd(b,a%b) :a);
}

int main(){
	ll n,cnt=0;
	cin>>n;
	for(int i=2;i<n;i++){
		arr[i-2]=is_prime(i);
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(gcd(arr[i],arr[j])){
				cnt++;
			}
		}
	}
	cout<<cnt<<endl;
	return 0;

}
