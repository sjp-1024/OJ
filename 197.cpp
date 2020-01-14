#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void sort(int a[]) {
	int tepm;
	for (int i = 0; i < 10; ++i) {
		for (int j = i + 1; j < 10; ++j) {
			if (a[i] > a[j]) {
				tepm = a[i];
				a[i] = a[j];
				a[j] = tepm;
			}
		}
	}
	for (int i = 0; i < 10; ++i) {
		printf("%d  ", a[i]);
	}
	printf("\n");
}
int  main() {
	int arr[10];
	for (int i = 0; i < 10; ++i) {
		scanf("%d", &arr[i]);
	}
/*	for (int i = 0; i < 10; ++i) {
		printf("%d  ", arr[i]);
	}*/
	printf("\n");
	sort(arr);
	return 0;
}

