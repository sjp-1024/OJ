/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 164.cpp
 &Created Time: 19Century 2019年07月31日 星期三 18时03分41秒   CST  Day/212 and Week/30 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
	int n,m,cnt=0;
	cin>>n>>m;
	cnt=n/m;
	if(n%m!=0){
		cnt+=1;
	}
cout<<cnt<<endl;
return 0;
}
