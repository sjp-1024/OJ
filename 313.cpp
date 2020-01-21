/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 313.cpp
 &Created Time: 19Century 2019年07月25日 星期四 23时25分31秒   CST  Day/206 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
long long sum=0;
int i;
int main(){
	int n,k;
    cin>>n>>k;
	for(int i=1;i<=n;i++){
	  sum+=k%i;
	}
	cout<<sum<<endl;
	return 0;
}
