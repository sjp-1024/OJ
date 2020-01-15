#include<iostream>

using namespace std;

int main()
{
	    long long a,b,p;
		scanf("%lld%lld%lld",&a,&b,&p);
		a%=p;b%=p;
		long long c=(long double)a*b/p;
		long long ans=a*b-c*p;
		if (ans<0) ans+=p;
		else if (ans>=p) ans-=p;
		printf("%lld",ans);
		return 0;
}
