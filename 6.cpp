#include<iostream>
using namespace std;
int main(){
	int sum1=0,sum2=0;
	for(int i=0;i<=100;i++){
		sum1+=i,sum2+=i*i;
	}
	printf("%d\n",sum1*sum1-sum2);
	return 0;
}
