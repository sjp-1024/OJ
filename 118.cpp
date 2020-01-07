/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 118.cpp
 &Created Time: 19Century 2019年07月04日 星期四 17时28分42秒   CST  Day/185 and Week/26 of this year
 ************************************************/
#include<iostream>
using namespace std;
#include<cmath>
inline bool is_prime(int x){
	if(x<=1) return false;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) return false;
	}
	return true;
}

int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	for(;n<=m;n++){
//		if(is_prime(n)&&n!=2)
//			printf(" ");
		if(is_prime(n))
		printf("%d\n",n);
	}


	return 0;

}
