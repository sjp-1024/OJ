#include<stdio.h>
int main() {
	int n, x;
	long long sum = 1;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
	scanf("%d", &x);
			sum *= x;
	}
	printf("%lld", sum);
	return 0;
}
