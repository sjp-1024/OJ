
/*
9 3 5 5
1 3
5 3
4 3
3 7
9 8
5
4
5
3
4
4
5
5
5


*/
#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;

#define MAX_N 10000

int f[MAX_N+5];
int c[MAX_N+5][MAX_N+5];//panchong 
int main(){
	int N,P,H,M;
	int a,b;
	cin>>N>>P>>H>>M;
	for(int i=1;i<=M;i++){
		cin>>a>>b;
		if(a>b) swap(a,b);
		if(c[a][b]) continue;//pc
		f[a+1]--;
		f[b]++;
		c[a][b]=1;
	}//cf
	for(int i=1;i<=N;i++){
		f[i]+=f[i-1];//c<->q
		cout<<f[i]+H<<endl;
	}
	return 0;
}

