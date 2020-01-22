/*************************************************
        &Author:     
        &E-mail: 878491983@qq.com
        &Motto: Believe in yourself.
        &File Name: 467.cpp
        &Created Time: 19Century 2019年08月13日 星期二 22时01分57秒 
                           CST  Day/225 and Week/32 of this year
        &Description:


 ************************************************/


#include<iostream>
using namespace std;

long long F(int n){
	long long p;
	if(n==1) return 1;
	return  p=n*F(n-1);
}

int main(){
	int n;
	cin>>n;
	cout<<F(n)<<endl;
	return 0;
}
