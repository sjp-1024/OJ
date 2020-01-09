#include<iostream>
using namespace std;
 int n,i,j;
 int main(){
	 cin>>n;
	for(i=n;i>=1;i--){
	    for(j=1;j<=i*2;j++){
	     cout<<'A';
		  }
		cout<<endl;
	}
	return 0;
	}
