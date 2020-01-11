#include<iostream>
#include<cmath>
using namespace std;
inline bool is_prime(int x){
	if(x<=1)return false;
	for(int i=2;i*i<=x;i++){
		if(x%i==0)return false;
	}
	return true;
}
int main(){
	int a,b,i,cnt=0,flag=0;
	cin>>a>>b;
	int c,d;
	double e,f,g,h;
	for(int i=a;i<b;i++){
		c=i/100;
		d=i%100;
		e=sqrt(c);
		f=sqrt(d);
		g=(int)e;
		h=(int)f;
		if((e==g)&&(f==h)&&(is_prime(i))){
			cnt+=1;
			if(cnt!=1) printf(" ");
		//	if(flag==1)  printf(" ");
			printf("%d",i);
			}
	//	printf("%d",i);
//		flag=1;
		}
    printf("\n");
	printf("%d",cnt);
	return 0;
}
