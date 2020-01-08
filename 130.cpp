
#include <iostream>
using namespace std;
int main() {
    double m, n;
    scanf("%lf%lf", &m, &n);
    double sum = 0;
    for (int i = 0; i < n ; i++) {
        sum = (m + sum) * (1 + 0.00417);
    }
    printf("$%.2lf\n", sum);
    return 0;
}

