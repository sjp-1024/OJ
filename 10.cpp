#include<iostream>
using namespace std;
#define MAX_N 2000000
int prime[MAX_N+5];
int is_prime[MAX_N+5];
long long sum=0;
int main(){
	for(int M=2;M<MAX_N;M++){
		if(is_prime[M]==0) {
		prime[++prime[0]]=M;
		sum+=M;
		}
		for(int j=1;j<=prime[0];j++){
			if(prime[j]*M>MAX_N)break;
			is_prime[prime[j]*M]=1;
			if(M%prime[j]==0) break;
		}
	}
	cout<<sum<<endl;
	return 0;
}
