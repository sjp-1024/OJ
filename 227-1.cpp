/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 227-1.cpp
 &Created Time: 19Century 2019年07月31日 星期三 16时22分32秒   CST  Day/212 and Week/30 of this year
 ************************************************/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll quickmul(ll a,ll b,ll p){
    ll ans = 0;
    a = a % p;
    while(b){
        if(b & 1) ans = (ans + a) % p;
        b >>= 1;
        a = (a << 1) % p;
    }
    return ans % p;
}
 
int main(){
    ll a,b,p;
    cin >> a >> b >> p;
    cout << quickmul(a,b,p) << endl;
}

