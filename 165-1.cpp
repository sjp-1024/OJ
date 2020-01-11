/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 165-1.cpp
 &Created Time: 19Century 2019年07月29日 星期一 13时25分21秒   CST  Day/210 and Week/30 of this year
 ************************************************/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long b,c,a;
	int cnt=0;
	cin>>c;
	for( a=1;a<sqrt(c);a++){
	b=sqrt(c-a*a);
	if(a*a+b*b==c){
		cnt+=1;
	}
	}
cout<<cnt<<endl;

return 0;
}
