#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int cnt=0;
	long long c;
	cin>>c;
	for(long long a=1;a<c;a++){
	long long b=sqrt(c*c-a*a);
		if(a*a+b*b==c*c){
			cnt++;
		}
	}
	cout<<cnt /2<<endl;
	return 0;
}
