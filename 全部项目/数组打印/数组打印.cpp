#include<iostream>
using namespace std;

void main() {

	int a[] = { 9,8,7,6,5,4,3,2,1 };
	int n = sizeof(a) / sizeof(a[0]);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	cout << endl;
	system("pause");
}