/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 263-1.cpp
*       &Created Time: 19Century 2019年09月11日 星期三 16时03分29秒 
*                          CST  Day/254 and Week/36 of this year
*       &Description:
*
*
***********************************************************/


#include <iostream>
#include<algorithm>
using namespace std;
#include<stack>

#define MAX_N 20
int arr[MAX_N+5];
bool val_stack(int *arr ,int n){
	int temp=0;
	stack<int>s;
	for(int i=0;i<n;i++){
		while(temp<arr[i]) s.push(++temp);
		if(s.top()-arr[i]) return false;
		s.pop();
	}
	return true;
}

int main(){
	int n,cnt=20;
	cin>>n;
	for(int i=0;i<n;i++){
		arr[i]=i+1;
	}
	do{
		if(val_stack(arr,n)){
			for(int i=0;i<n;i++){
				cout<<arr[i];
			}
			cout<<endl;
			cnt--;
		}
		
	}
	while(next_permutation(arr,arr+n) && cnt);
	return 0;
}
