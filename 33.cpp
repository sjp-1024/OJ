/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 33.cpp
 &Created Time: 19Century 2019年07月09日 星期二 14时42分21秒   CST  Day/190 and Week/27 of this year
 ************************************************/
#include<iostream>
using namespace std;
int main(){
	double m,n,sum;
	int p;
//	scanf("%d%d%d",&m,&n,&p);
	cin>>m>>n>>p;
	switch(p){
		case 0:sum=(m*0.973+n)/2;break;
		case 1:sum=(m+n)*1.087/2;break;
		default: printf("NO");
	}
	printf("%.2f",sum);
//	cout<< setprecision(2) <<sum<<endl;
	return 0;
}
