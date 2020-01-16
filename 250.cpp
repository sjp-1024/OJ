/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 250.cpp
*       &Created Time: 19Century 2019年09月30日 星期一 16时32分13秒 
*                          CST  Day/273 and Week/39 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define MAX_N 1000000
long long a[MAX_N+5],f[MAX_N+5];
long long  n,sum=0,ans=0;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	sum/=n;
	for(int i=1;i<=n;i++) a[i]-=sum;
	for(int i=1;i<=n;i++) f[i]=f[i-1]+a[i];
	sort(f+1,f+n+1);
	for(int i=1;i<=n;i++) ans+=abs(f[i]-f[(n+1)/2]);
	cout<<ans<<endl;
	return 0;
}


