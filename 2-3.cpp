/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 2-3.cpp
 &Created Time: 19Century 2019年07月12日 星期五 11时05分38秒   CST  Day/193 and Week/27 of this year
 ************************************************/


#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
#define MAX_M 4000000

int main() {
    long long sum = 0;
    int f[3] = {0, 1};
    int n = 1;
    while (f[n % 3] + f[(n - 1) % 3] < MAX_M) {
        n += 1;
        f[n % 3] = f[(n - 1) % 3] + f[(n - 2) % 3];
        if (!(f[n % 3] & 1)) sum += f[n % 3];
    }
    printf("%lld\n", sum);
    return 0;
}
