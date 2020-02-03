#include<iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int is_valid(int x,int base){     // base=10  十进制
	int rew=x,temp=0;
	while(x){
		temp=temp*base+x%base;
		x/=base;
	}
return temp==rew;
}
int main(){
	int ans=0;
	for(int i=0;i<1000;i++){
		for(int j=i;j<1000;j++){
			if(is_valid(i*j)&&i*j>ans) ans=i*j;
		}
	}
	printf("%d\n",ans);
	return 0;
}
