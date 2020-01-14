/***********************************************************
*       &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 193.cpp
*       &Created Time: 19Century 2019年08月31日 星期六 23时50分36秒 
*                          CST  Day/243 and Week/34 of this year
*       &Description:
*
*
***********************************************************/


#include<iostream>
using namespace std;
#define MAX_N 100000

int main() {
    int n,k,s;
	int a[MAX_N+5];
    cin >>n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    cin>>k>> s;

    int x=s-k;
    int l=1, r=n ;
    while (r-l>=0) {
        int mid=(l+r)/2;
        if (a[mid]==x) {
            cout<<"Yes"<<endl;
            return 0;
        }
		 if (a[mid]>x) {
            r=mid-1;
        }
		if (a[mid]< x) {
            l= mid + 1;
        }

    }
    cout<<"No"<<endl;
    return 0;
}

