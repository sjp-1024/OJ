#include <iostream>
using namespace std;
int is_valid(int x){
	int raw=x,temp=0;
	while(x){
		temp=temp*10+x%10;
		x/=10;
	}
return temp==raw;
}
int main(){
	int ans=0;
	for(int i=0;i<1000;i++){
		for(int j=i;j<1000;j++){
			if(is_valid(i*j) && i*j>ans) ans=i*j;
		}
	}
	printf("%d\n",ans);
	return 0;
}
