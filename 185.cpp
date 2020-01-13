/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 185.cpp
 &Created Time: 19Century 2019年07月06日 星期六 11时27分23秒   CST  Day/187 and Week/26 of this year
 ************************************************/
#include<iostream>
using namespace std;
int F(int n){
	if(n==1||n==2){
		return 1;}
else{
	return F(n-1)+F(n-2);}
}
int main(){
    long long n = 0;
    scanf("%lld",&n);
    printf("%lld\n",F(n));
    return 0;
}
