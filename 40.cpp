/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 40.cpp
 &Created Time: 19Century 2019年07月26日 星期五 23时15分18秒   CST  Day/207 and Week/29 of this year
 ************************************************/

#include<iostream>
#include<cstring>
using namespace std;
long long a[502];
int main(){
	long long n,i;
	cin>>n;
	a[0]=1;
	a[1]=0;
	a[2]=1;
	a[3]=1;
	for(int i=4;i<=n;i++){
		a[i]=a[i-2]+a[i-3];
		
	}
	cout<<(string)a[n]<<endl;
	return 0;
}
