/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 486.cpp
*       &Created Time: 19Century 2019年10月22日 星期二 18时35分31秒 
*                          CST  Day/295 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 1000
int arr[MAX_N+5];
int main(){
	int n;
	scanf("%d",&n);
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2]*2;
		arr[i]%=12345;
	}
	printf("%d\n",arr[n]);
//	cout<<arr[n]<<endl;
	return 0;
}

