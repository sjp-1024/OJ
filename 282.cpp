/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 282.cpp
 &Created Time: 19Century 2019年07月25日 星期四 14时07分28秒   CST  Day/206 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
#define MAX_N 999999
int main(){
	int n;
	 long long  a[MAX_N+5];
	long long sum=0,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n-2;i++){
	   if( a[i]^a[i+1]>a[i+1]^a[i+2]){
		   sum=a[i]^a[i+1];
		   if(cnt<sum)
			   cnt=sum;
	   }
	}
	cout<<cnt<<endl;

	return 0;
}
