/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 442.cpp
*       &Created Time: 19Century 2019年10月27日 星期日 22时32分58秒 
*                          CST  Day/300 and Week/43 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N  30
int arr[MAX_N+5];
int main(){
	int n;
	cin>>n;
	//arr[0]=1;
	arr[1]=1;
	arr[2]=2;
	for(int i=3;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];
	}
	int flag=0;
	for(int i=1;i<=n;i++){
		//cout<<arr[i]<<" "<<endl;
		if(flag==0){
		printf("%d",arr[i]);
		}else{
			printf(" %d",arr[i]);
		}
		flag++;
	}

	return 0;

}
