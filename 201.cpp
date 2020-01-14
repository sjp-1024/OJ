/***********************************************************
* 	  &Author: Shi Jinpeng     
*       &E-mail: shi_jinpeng@foxmail.com
*       &Motto: Believe in yourself.
*       &File Name: 201.cpp
*       &Created Time: 19Century 2019年10月27日 星期日 22时50分01秒 
*                          CST  Day/300 and Week/43 of this year
*       &Description:
***********************************************************/


#include<iostream>
#include <algorithm>
using namespace std;
#define MAX_N 100
int a[MAX_N+5],b[MAX_N+5];
int main() {
    int n,ans=0;
    cin >> n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
    int flag = 0;
    for (int i=0;i<n;i++){
        if (a[i]==a[i+1]) continue;
        if (flag==0){
            ans=1;
            b[ans]=a[i];
            flag++;
        } 
		else {
            ans++;
            b[ans]=a[i];
        }
    }
    cout <<ans<< endl;
    for (int i=1; i<=ans;i++) {
        if (i!=1) cout<< " ";
        cout<<b[i];
    }
    cout<<endl;
    return 0;
}

