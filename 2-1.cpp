/*************************************************
 &Author: 
 &Description:Believe in yourself.
 &File Name: 2-1.cpp
 &Created Time: 19Century 2019年07月12日 星期五 11时04分56秒   CST  Day/193 and Week/27 of this year
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
    int a = 0, b = 1;
    while (a + b < MAX_M) {
        b = a + b;
        a = b - a;
        if (!(b & 1)) sum += b;
    }
    printf("%lld\n", sum);
    return 0;
}
