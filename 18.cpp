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
int dfs(int i,int j,int n){
	if(i+1==n){	return val[i][j];}
	
	int val1=dfs(i+1,j,n);
	int val2=dfs(i+1,j+1,n);
	return (val1>val2? val1:val2)+val[i][j];
}
int main(){
	for(int i=0;i<=MAX_N;i++){
		for(int j=0;j<=i;i++){
			cin>>val[i][j];

		}
	}
	cout<<dfs(0,0,MAX_N)<<endl;
	return 0;

}
