#include<iostream>
using namespace std;
int F(int x ){
	if(x<=0) return 0;
	if(x==1) return 1;
    if(x>1 && x%2==0)  return 3*F(x/2)-1;
		return 3*F((x+1)/2)-1;
}
int main(){
	int c;
   cin>>c;
   long long ans;
   ans=F(c);
   cout<<ans<<endl;
   return 0;
}
