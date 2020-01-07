/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 123.cpp
 &Created Time: 19Century 2019年07月09日 星期二 22时25分15秒   CST  Day/190 and Week/27 of this year
 ************************************************/
#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a>=c&&b<=d){
		cout<<"YES"<<endl;
	}else if(c>=a&&d<=b){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
return 0;
}
