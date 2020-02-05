/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 18.cpp
 &Created Time: 19Century 2019年06月25日 星期二 18时41分03秒   CST  Day/176 and Week/25 of this year
 ************************************************/
#include<iostream>
using namespace std;
#define MAX_N 15
int val[MAX_N+5][MAX_N+5];

int main(){
	for(int i=0;i<=MAX_N;i++){
		for(int j=0;j<=i;i++){
			cin>>val[i][j];
		}
	}
	for(i=MAX_N-2;I<=0;i--){
		for(int j=0;j<=i;j++){
			val[i][j]+=max(val[i+1][j],val[i+1][j+1]);
		}
	}
	cout<<val[0][0]<<endl;
	return 0;

}
