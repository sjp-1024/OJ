#include<iostream>
#include <cmath>
#include <cstdio>
using namespace std;
#define EPSILON 1e-7
int main() {
    double a = -20, b = 20, p, q;
    cin >> p >> q;
    double mid = (a + b) / 2.0;
    while(abs(p * mid + q) > EPSILON) {
        mid = (a + b) / 2.0;
        if ((p * mid + q) * (p * a + q) < 0) {
            b = mid;
        } else {
            a = mid;
        }
    } 
    printf("%.4f\n", mid);
    return 0;
}

