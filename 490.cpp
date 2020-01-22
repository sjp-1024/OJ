/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 490.cpp
*       &Created Time: 19Century 2019年10月23日 星期三 15时28分55秒 
*                          CST  Day/296 and Week/42 of this year
*       &Description:
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 32767
long long  arr[MAX_N+5];
int P(int n){
	if(n==arr[n])
		return n;
    P(arr[n]);
}

int main(){
	int n,ans=1;
	arr[1]=1;
	cin>>n;
	for(int i=2;i<=n;i++){
		arr[i]=(arr[i-1]+1)%i+1;
	}
		ans=P(n);
    cout<<ans+n<<endl;
    return 0;
}
