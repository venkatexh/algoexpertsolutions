#include<bits/stdc++.h>

using namespace std;

int check(int a, int b) {
	return a > b ? 1 : 0;
}

// Here the absolute difference between
// two elements has been considered

int smallest_difference(int A[], int B[], int n1, int n2) {
	int diff = INT_MAX;
	int i = 0, j = 0;
	while(i < n1 && j < n2) {
		if(A[i] == B[j])
			return 0;
		if(A[i] < B[j]) {
			if(check(diff, abs(A[i] - B[j])))
				diff = abs(A[i] - B[j]);
			i++;
		}
		else {
			if(check(diff, abs(A[i] - B[j])))
				diff = abs(A[i] - B[j]);
			j++;
		}
	}
	return diff;
}

int main() {
	cout << "Enter length of first array:" << endl;
	int n1;
	cin >> n1;
	cout << "Enter length of second array:" << endl;
	int n2;
	cin >> n2;
	int A[n1], B[n2];
	cout << "Enter first array: " << endl;
	for(int i = 0; i < n1; i++)
		cin >> A[i];
	cout << "Enter second array: " << endl;
	for(int i = 0; i < n2; i++)
		cin >> B[i];
	sort(A, A + n1);
	sort(B, B + n2);
	int res = smallest_difference(A, B, n1, n2);
	cout << "Smallest difference is: " << res << endl;
	return 0;
}
