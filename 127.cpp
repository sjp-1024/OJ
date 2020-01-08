/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 127.cpp
 &Created Time: 19Century 2019年07月25日 星期四 19时29分09秒   CST  Day/206 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
	int n,y;
	double sum;
	cin>>n>>y;
	sum=n;
	for(int i=1;i<=y;++i){
	sum=sum*1.06;
	}
	if(y==0)
		sum==0;
	cout<<(int)sum<<endl;
	return 0;
}

