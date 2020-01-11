#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		printf("%d\n",i*(i-1)+3);
	}
	printf("%d\n",3*n+(n-1)*(2*n-1)*n/6+n*(n-1)/2);
	return 0;
}
