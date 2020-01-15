#include<iostream>
using namespace std;
#define ll long long 
ll pow_mod(ll a,ll b,ll c){
 ll ans=1;
 while(b){
  if(b&1) ans*=a;
  ans%=c;
  a*=a;
  a%=c;
  b>>=1;
 }
 return ans;
}
int main(){
 ll a,b,c;
 cin>>a>>b>>c;
 cout<<pow_mod(a,b,c)<<endl;
 return 0;
}
