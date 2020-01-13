/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 181-2.cpp
 &Created Time: 19Century 2019年07月28日 星期日 22时04分29秒   CST  Day/209 and Week/30 of this year
 ************************************************/

#include<iostream>
#include<cstring>
using namespace std;
#define MAX_N 1000
int main(){
	char arr[MAX_N+5];
	int i;
	cin>>arr;
	int a=strlen(arr);
	
		for(int i=0;i<a;i++){
			if(arr[i]>=65 && arr[i]<=91){
				arr[i]=arr[i]+32;
				cout<<arr[i];
			}else{
				arr[i]=arr[i]-32;
				cout<<arr[i];
			}
		}
	


	return 0;
}
