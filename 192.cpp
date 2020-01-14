/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 192.cpp
 &Created Time: 19Century 2019年07月06日 星期六 11时12分58秒   CST  Day/187 and Week/26 of this year
 ************************************************/
#include<iostream>
using namespace std;
long long F[502];
int main(){
	int n;
	cin>>n;
	F[0]=1;
	F[1]=0;
	F[2]=1;
	F[3]=1;
	for(int i=4;i<=n;i++){
			F[i]=F[i-2]+F[i-3];

	}
		cout<<F[n]<<endl;
		return 0;


}
