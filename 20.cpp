/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 20.cpp
 &Created Time: 19Century 2019年06月25日 星期二 17时07分51秒   CST  Day/176 and Week/25 of this year
 ************************************************/
#include<iostream>
using namespace std;
int sum=0;
long fac(int n){

	if(n=1)return 1;
	return n*fac(n-1);
}
void conv(int c){
	if(c<10){
		cout<<c;
		return;
	}
	cout<<c%10;
	conv(c/10);
	sum+=c;
}
int main(){
	int n,d,a;
	d=fac(100);
	a=conv(d);
	cout<<a<<endl;
return 0;

}
