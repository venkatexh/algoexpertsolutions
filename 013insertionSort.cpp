#include<iostream>

using namespace std;

void insertion_sort(int arr[], int n) {
	int i, j, key;
	for(i = 1; i < n; i++) {
		j = i - 1;
		key = arr[i];
		while(j >= 0 && arr[j] > key) {
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

int main() {
	int n, i;
	cout << "Enter number of elements to sort: ";
	cin >> n;
	int arr[n];
	cout << "Enter elements:" <<endl;
	for(i = 0; i < n; i++)
		cin >> arr[i];
	insertion_sort(arr, n);
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}