/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 275.cpp
*       &Created Time: 19Century 2019年10月30日 星期三 20时12分49秒 
*                          CST  Day/303 and Week/43 of this year
*       &Description:
***********************************************************/


#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
#define MAX_N 100000
unsigned long long f[MAX_N+5],p[MAX_N+5];
char s[MAX_N+5];
int main(){
    int q;
    cin>>s+1;
    p[0]=1;
    int len=strlen(s+1);
    for(int i=1;i<=len;i++){
        f[i]=f[i-1]*131+(s[i]-'a'+1);
        p[i]=p[i-1]*131;
    }
    cin>>q;
    for(int i=1;i<=q;i++){
        int l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(f[r1]-f[l1-1]*p[r1-l1+1]==f[r2]-f[l2-1]*p[r2-l2+1])
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

