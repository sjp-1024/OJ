/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 138-2.cpp
 &Created Time: 19Century 2019年07月25日 星期四 23时19分23秒   CST  Day/206 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		for(int j=1;j<=2*i;j++){
			cout<<'A';
		}
		cout<<endl;
	}
	return 0;
}
