#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[35];
    int b[12] = {0};
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[10 - a[i] / 10] += 1;
    }
    sort(a, a + n, greater<int>());
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    for (int i = 0; i < 5; i++) {
        if (i != 0) cout << " ";
        cout << b[i];
    }
    int sum = 0;
    for (int i = 5; i <= 10; i++) {
        sum += b[i];
    }
    cout << " " << sum << endl;
    return 0;
}

