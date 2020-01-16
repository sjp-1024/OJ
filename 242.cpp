/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 242.cpp
*       &Created Time: 19Century 2019年08月29日 星期四 23时43分28秒 
*                          CST  Day/241 and Week/34 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
#include<algorithm>
using namespace std;
#define MAX_N 100000

int n,m;
int c[MAX_N+5];
double sum[MAX_N+5];

bool check(double avg){
	for(int i=1;i<=n;i++){
		sum[i]=sum[i-1]+c[i]-avg;
	}
	double minv=0;
	for(int i=0,j=m;j<=n;j++,i++){
			minv=min(minv,sum[i]);
			if(sum[j]>=minv) return true;
	}
	return false ;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	double l=0,r=2000;
	while(r-l>1e-5){
		double mid=(l+r)/2;
		if(check(mid)) l=mid;
		else r=mid;
	}
	printf("%d\n",int(r*1000));
	return 0;
}
