/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 313-1.cpp
 &Created Time: 19Century 2019年07月25日 星期四 23时44分36秒   CST  Day/206 and Week/29 of this year
 ************************************************/

#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
long long n,k; 
int main(){
	scanf("%lld%lld",&n,&k);
	long long ans=n*k;
	for(long long l=1,r;l<=n;l=r+1) {
        if(k/l!=0) r=min(k/(k/l),n); 
        else r=n;
        ans-=(k/l)*(r-l+1)*(l+r)/2;
    }
	printf("%lld",ans);
	return 0;
}

