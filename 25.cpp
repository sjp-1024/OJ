#include<iostream>
using namespace std;
int f[2][1005];
int main(){
	int n=2;
	f[0][0]=f[1][0]=f[0][1]=f[1][1]=1;
	while(f[n%2][0]<1000){
		n++;
		int n0=n& 1,n1=n0^1;
		f[n0][0]= f[n1][0];
		for(int i=1;i<=f[n0][0];i++){
			if(f[n0][i]<10) continue;
			f[n0][i+1]+=f[n0][i]/10;
			f[n0][i]%=10;
			f[n0][0]+=(f[n0][0]==i);
		}
	}
	cout<<n<<endl;
	return 0;
}

