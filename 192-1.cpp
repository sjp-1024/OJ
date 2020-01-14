/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 192-1.cpp
*       &Created Time: 19Century 2019年09月09日 星期一 16时43分26秒 
*                          CST  Day/252 and Week/36 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
using namespace std;
#include<cmath>

int  main(){
	double a;
	cin>>a;
	double r=a,l=0;
	while(r-l>1e-5){
		double mid=(r+l)/2;
		if((l*exp(l)-a)*(mid*exp(mid)-a)<0)
			r=mid;
		else 
			l=mid;
	}
	printf("%.4f\n",l);
	return 0;
}
