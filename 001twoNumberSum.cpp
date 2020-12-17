#include<bits/stdc++.h>

using namespace std;

int twoNumberSum(vector<int> arr, int n, int sum) {
	auto l = arr.begin();
	auto r = arr.begin() + arr.size() - 1;
	while(l != r) {
		if((*l + *r) == sum) {
			return 1;
		} else if((*l + *r) < sum) {
			l++;
		} else {
			r--;
		}
	}
	return 0;
} 

int main() {
	vector<int> v;
	int n, x, sum;
	cout << "Enter number of elements:" << endl;
	cin >> n;
	cout << "Enter array elements: " << endl;
	for(int i = 0; i < n; i++) {
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	cout << "Enter sum: " <<endl;
	cin >> sum;
	if(twoNumberSum(v, n, sum)){
		cout << "Sum found!" << endl;
	} else {
		cout << "Sum not found!" <<endl;
	}
	return 0;
}