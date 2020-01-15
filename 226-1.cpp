/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 226-1.cpp
 &Created Time: 19Century 2019年07月31日 星期三 16时19分20秒   CST  Day/212 and Week/30 of this year
 ************************************************/

#include<iostream>
using namespace std;
int main()
{
    long long a, b, p;    
    cin >> a >> b >> p;
    long long res = 1 % p;    
    while(b)
    {
        if(b & 1) res =  1ll * res * a % p;    
        a =  1ll * a * a % p;                  
        b >>= 1;                
    }
    cout << res;
    return 0;
}

