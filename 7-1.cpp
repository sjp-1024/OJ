#include<iostream>
using namespace std;
#define MAX_NUM 200000
int  isPrime[MAX_NUM+10];
int main(){
		for(int i=2;i*i<=MAX_NUM;i+=1+(i%2)){
		    if( isPrime[i]) continue;
			isPrime[i]=i;
			for (int j=i*i;j<=MAX_NUM;j+=i){
				if( isPrime[j]==0) 
					isPrime[j]=i;
			  }
			}
		for(int i=2;i<=MAX_NUM;i++){
				if(isPrime[i])  continue;
				isPrime[++isPrime[0]]=i;
			}
			cout<<isPrime[10001]<<endl;					
			return 0;
}

