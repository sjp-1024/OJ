/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 129.cpp
 &Created Time: 19Century 2019年07月25日 星期四 16时27分02秒   CST  Day/206 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
#define MAX_N 10000
int main(){
	int n,min;
	int a[MAX_N+5];
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
    min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<min<<endl;
	return 0;
}
