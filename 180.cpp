#include<iostream>
using namespace std;

long long pow(int n) {
    long long p = 1; 
    for (int i = 0; i < n; i++) {
        p *= 2;
    }
    return p;
}

int main() {
    int n;
    cin >> n;
    long long sum = pow(2,n);
    cout << sum << endl;
    return 0;
}
