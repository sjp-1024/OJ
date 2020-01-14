/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 194.cpp
*       &Created Time: 19Century 2019年08月31日 星期六 22时51分14秒 
*                          CST  Day/243 and Week/34 of this year
*       &Description:
*
*
***********************************************************/

#include<iostream>
using namespace std;
#define MAX_N 100000

int main(){
    int n,s;
    int num[MAX_N+5]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    cin>>s;

    int flag=0;
    for(int i=1;i<=n;i++){
        int ans=s-num[i];
        int l=i,r=n;
        while(r-l>=0){
            int mid=(r+l)/2;
            if(ans==num[mid]){
                cout<<"Yes"<<endl;
                flag=1;
                break;
            }
            if(ans<num[mid]){
                r=mid-1;
            }
            if(ans>num[mid]){
                l=mid+1;
            }
        }
        if(flag==1) break;
    }
    if(flag==0){
        cout<<"No"<<endl;
    }
    return 0;
}

