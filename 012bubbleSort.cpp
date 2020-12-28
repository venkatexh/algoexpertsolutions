#include<iostream>

using namespace std;

void bubble_sort(int arr[], int n) {
	int i, j, temp;
	for(i = 0; i < n; i++) {
		for(j = i; j < n; j++) {
			if(arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
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
	bubble_sort(arr, n);
	for(i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}