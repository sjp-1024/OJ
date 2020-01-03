/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 37_1.cpp
 &Created Time: 19Century 2019年07月29日 星期一 13时16分10秒   CST  Day/210 and Week/30 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
	int m,n;
	int cnt=0;
	cin>>m>>n;
	for(int i=m+1;i<n;i++){
		if((i%2!=0) && (i%5!=0))
			cnt+=1;
	}
	cout<<cnt<<endl;
	return 0;
}
