#include<iostream>
using namespace std;
bool isPrime(int n,int a){
	if(n < 2) return false;
	if(n == a) return true;
	if(n % a == 0) return false;
	return isPrime(n, a + 1);
}
int isPalindrome(int n,int i){
	if(n==0) return i;
	else{

		i *= 10;
		i += n%10;
		return isPalindrome(n/10,i);
	}
}
int main(){
	long long a,b,i;
	bool firstflag=true;
	cin>>a>>b;
/*	if(10000>a || a>b || b>99999){
		cout<<"10000<=a<b<=99999"<<endl;
		return 0;
   }*/
	for(i=a;i<=b;i++){
		if(isPrime(i,2)==true && isPalindrome(i,0)==i){
			if(firstflag==true){
				cout<<i;
				firstflag=false;
			}else cout<<" "<<i;
		}
	}
	return 0;
}


