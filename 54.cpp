/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 54.cpp
 &Created Time: 19Century 2019年06月25日 星期二 19时53分43秒   CST  Day/176 and Week/25 of this year
 ************************************************/
#include<iostream>
#include<cmath>
using namespace std;
#define MAX_N 10000
int num1[MAX_N +5];
int num2[MAX_N+5];

int main(){
	int x;
	while(cin>>x){
		num1[0]=num1[1]=1;
		for(int i=1;i<=x;i++){
			for(int j=1;j<=num1[0];j++) num1[j]*=i;
            for(int j=1;j<=num1[0];j++){
				if(num1[j]<10)continue;
				num1[num1[0]+1]=0;
				num1[j+1]+=num1[j]/10;
				num1[j]%=10;
				num1[0]+=(num1[0]==j);
			}
		}
		num2[0]=num2[1]=1;
		for(int i=1;i<=num1[0];i++){
			if(num1[i]==0) continue;
			for(int j=1;j<=num2[0];j++) num2[j]*=num1[i];
            for(int j=1;j<=num2[0];j++){
				if(num2[j]<10)continue;
				num2[num2[0]+1]=0;
				num2[j+1]+=num2[j]/10;
				num2[j]%=10;
				num2[0]+=(num2[0]==j);
			}
		}
        for(int i=num2[0];i>=1;--i){

			cout<<num2[i];
		}
		cout<<endl;
	}
	return 0;
}

