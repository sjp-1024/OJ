/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 182-1.cpp
 &Created Time: 19Century 2019年07月26日 星期五 10时13分12秒   CST  Day/207 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100
int main(){
	int max,n,a[MAX_N+5];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	max=a[0];
	for(int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
		}
		
	}
	cout<<max<<endl;
	return 0;
}
