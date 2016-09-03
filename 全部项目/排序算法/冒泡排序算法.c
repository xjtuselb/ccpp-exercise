#include<stdio.h>

void main() {
	int a[] = { 9,8,7,6,5,4,3,2,1 };
	int len = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < len; i++) {
		for (int j = i + 1; j < len; j++) {
			if (a[i] > a[j]) {
				a[i] = a[i] ^ a[j];
				a[j] = a[i] ^ a[j];
				a[i] = a[i] ^ a[j];
			}
		}
	}

	for (int i = 0; i < len; i++)
		printf("%d ", a[i]);

	printf("\n");

	system("pause");
}