/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 119.cpp
*       &Created Time: 19Century 2019年12月03日 星期二 21时41分42秒 
*                          CST  Day/337 and Week/48 of this year
*       &Description:
***********************************************************/


#include <iostream>
using namespace std;
int main(){ 
	int y, m, d, y1, m1, d1, y2,m2,d2,a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>y>>m>>d;
	if(y%4==0&&y%100||y%400==0) a[2]=29;
	y1=y2=y;m1=m2=m;d1=d-1;d2=d+1;
	if(d==1){
		if(m==1) {
			y1-=1;m1=12;d1=31;
		}
		else {
		m1-=1;d1=a[m1];
		}
	}
	if(d==a[m]){
		if(m==12) {
			y2+=1;m2=d2=1;
		}
		else {
			m2+=1;d2=1;
		zfzfz
	}
	printf("%d %d %d\n%d %d %d",y1,m1,d1,y2,m2,d2);
	return 0;
}
