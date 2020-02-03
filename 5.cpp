/*
2520是最小的能够被1到10整除的数。

最小的能够被1到20整除的正数是多少？

*/

#include<iostream>
using namespace std;
typedef long long lint;;
lint gcd(lint a,lint b){
	return (b? gcd(b,a%b):a);
}
int main(){
	lint ans=1;
	for(int i=2;i<=20;i++){
		ans=ans*i/gcd(ans,i);
	}
	cout<<ans<<endl;
	return 0;
}
