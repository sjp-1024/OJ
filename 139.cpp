/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 139.cpp
 &Created Time: 19Century 2019年07月12日 星期五 15时32分18秒   CST  Day/193 and Week/27 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i;j++){
			cout<<"A";
		}
		cout<<endl;
	}
	for(int i=n-1;i>0;i--){
		for(int j=0;j<n-i;j++){
			cout<<" ";
		}
		for(int j=0;j<2*i;j++){
			cout<<"A";
		}
		cout<<endl;
	}
	return 0;
}
