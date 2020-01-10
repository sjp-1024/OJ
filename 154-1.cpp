/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 154-1.cpp
 &Created Time: 19Century 2019年07月26日 星期五 22时07分05秒   CST  Day/207 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=n;i>=1;i--){
		cout<<i;
		for(int j=i-1;j>=1;j--){
			printf(" %d",j);
		}
		printf("\n");

	}
//	printf("\n");

	return 0;
}
