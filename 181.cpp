/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 181.cpp
 &Created Time: 19Century 2019年07月28日 星期日 16时49分59秒   CST  Day/209 and Week/30 of this year
 ************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100
int main(){
	char a[MAX_N+5];
	while(1){
			cin>>a;
		for(int i=0;a[i];i++){
			if(a[i]<=91&& a[i]>=65){
				a[i]=a[i]+32;
				cout<<a[i];
			}
		    else {
			     a[i]=a[i]-32;
				 cout<<a[i];
		      }
		}				 
	}
	return 0;
}
