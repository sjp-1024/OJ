/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 491.cpp
*       &Created Time: 19Century 2019年10月23日 星期三 14时43分59秒 
*                          CST  Day/296 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 50
long long  arr[MAX_N+5];
int main(){
	int n,m;
	cin>>n>>m;
    arr[0]=1;
	for(int i=1;i<=n;i++){
		if(i<m){
			arr[i]=2*arr[i-1];
		}
		if (i==m){
			arr[i]=2*arr[i-1]-1;
		}
		if(i>m){
			arr[i]=2*arr[i-1]-arr[i-m-1];
			}
	}
	cout<<arr[n]<<endl;
return 0;
}
