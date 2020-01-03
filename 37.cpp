/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 37.cpp
 &Created Time: 19Century 2019年07月22日 星期一 12时16分05秒   CST  Day/203 and Week/29 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main(){
	int m,n;
	int cut=0;
	cin>>m>>n;
	for(int i=m+1;i<n;i++){
		if((i%2==0) && (i%5==0)){
			cut+=1;
		}
	}
	cout<<n-m-cut<<endl;
	return 0;
}
