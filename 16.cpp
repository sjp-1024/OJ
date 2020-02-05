/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 16.cpp
 &Created Time: 19Century 2019年06月25日 星期二 14时55分32秒   CST  Day/176 and Week/25 of this year
 ************************************************/

#include<iostream>
using namespace std;
#define MAX_N 400
int num[MAX_N+5];
int main(){
	num[0]=num[1]=1;
	for(int i=0;i<1000;i++){
		for(int j=1;j<=num[0];j++){
			num[j]*=2;	//   或者num[j]*=1024;
		}
		for(int j=1;j<=num[0];j++){
			if(num[j]<10)continue;
			num[j+1]+=num[j]/10;
			num[j]%=10;
			num[0]+=(num[0]==j);
		}
	}
	int ans=0;
	for(int i=num[0];i>=1;i--){
		ans+=num[i];

	}
	printf("%d\n",ans);
	return 0;
}
