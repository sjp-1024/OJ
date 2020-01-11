/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 163.cpp
 &Created Time: 19Century 2019年07月31日 星期三 18时09分18秒   CST  Day/212 and Week/30 of this year
 ************************************************/

#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long  a,b,c;
	float n,m;
	cin>>a>>b>>c;
    m=cos(c*3.1415926535897932384626433832795028841971/180);
    n=sqrt(a*a+b*b-2*a*b*m);
    printf("%f\n", n); 

	return 0;
}
