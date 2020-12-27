#include<iostream>
#include<vector>

using namespace std;

vector<int> move_element(vector<int> v, int n, int k) {
	int i = 0, j = n-1;
	int temp;
	while(i <= j) {
		if(v[i] == k && v[j] != k){
			temp = v[i];
			v[i] = v[j];
			v[j] = temp;
			i++;
			j--;
		} else if(v[i] == k && v[j] == k){
			j--;
		} else {
			i++;
		}
	}
	return v;
}

int main() {
	int n, k, x;
	cout << "Enter array length: "<< endl;
	cin >> n;
	vector<int> v;
	cout << "Enter array elements: " << endl;
	for(int i = 0; i < n; i ++) {
		cin >> x;
		v.push_back(x);
	}
	cout << "Enter element to move: ";
	cin >> k;
	vector<int> y = move_element(v, n, k);
	cout << "New array:" << endl;
	for(int i = 0; i < n; i++)
		cout << y[i] << "\t";
	cout << endl;
	return 0;
}