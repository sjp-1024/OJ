#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define N 600851475143LL
int main(){
	long long  num=N,ans,i=2;
	while(i*i<=num){

		if(num%i==0) ans=i;
        while(num%i==0) num=num/i;

		i++;
	} 
	if(num!=1)ans=num;
		printf("%d\n",ans);
		return 0;
}
