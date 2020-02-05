/*************************************************
&Author: 
&Description:Believe in yourself.
&File Name: 12.cpp
&Created Time: 19Century 2019年06月24日 星期一 23时42分12秒   CST  Day/175 and Week/25 of this year
************************************************/

#include<iostream>
#include<cmath>
using namespace std;
#define MAX_N 10000
int f[MAX_N +5],cnt[MAX_N+5];
int prime[MAX_N +5];

int main(){
    f[1]=1;
    for(int i=2;2*i<=MAX_N;i++){
        if(!prime[i]){
            prime[++prime [0]]=i;
            f[i]=2;
            cnt[i]=1;
        }
        for(int j=1;prime[j]*i<=MAX_N;j++){
            prime[prime[j]*i]=1;
            if(i%prime[j]==0) {
                f[prime[j]*i]=f[i]/(cnt[i]+1)*(cnt[i]+2);
                cnt[prime[j]*i]=cnt[i]+1;
                break;
            }else{
                f[prime[j]*i]=f[prime[j]]*f[i];
                cnt[prime[j]*i]=1;
            }
        }
    }
    for(int i=2;i<=100;i++){
        printf("F[%d]=%d\n",i,f[i]);
    }

    return 0;
}

