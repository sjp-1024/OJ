/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 316.cpp
 &Created Time: 19Century 2019年08月01日 星期四 10时32分22秒   CST  Day/213 and Week/30 of this year
 ************************************************/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;
 
typedef long long ll;
ll Conv_num(ll n){
    ll result = n;
    for (ll i = 2; i*i <= n; i++){
        if (n % i == 0){
            result -= result / i;
            while (n % i == 0){
                n /= i;
            }
        }
    }
    if (n > 1){
        result -= result/n;
    }
    return result;
}
 
int main(){
      ll n;    
      cin >> n;
      ll result = 0;
        for (ll i = 1; i * i <= n; i++){
            if (n % i == 0){
                result += Conv_num(n / i)*i;
                if (n != i * i){
                    result += (n / i) * Conv_num(i);
                }
            }
        }
        cout << result << endl;   
    return 0;
}

