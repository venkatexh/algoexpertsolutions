#include<bits/stdc++.h>

using namespace std;

// iteratively using utility function

bool check_palindrome(string str, int i, int j) {
	if(str[i] != str[j])
		return false;
	else
		return true;
}

bool check_palindrome_util(string str, int i, int j) {
	bool res;
	while(i <= j) {
		res = check_palindrome(str, i, j);
		if(!res)
			return res;
		i++;
		j--;
	}
	return res;
}

// recursively

bool check_palindrome_rec(string str, int i, int j) {
	if(i > j)
		return true;
	if(str[i] != str[j])
		return false;
	return check_palindrome_rec(str, i+1, j-1);
}

// reversing and pushing into array

bool check_palindrome_rev(string str, int i, int j) {
	string res;
	while(i <= j) {
		res.push_back(str[j--]);
	}
	return (res == str);
}

int main() {
	string str;
	cout << "Enter string: ";
	getline(cin, str);
	if(check_palindrome_rev(str, 0, str.length() - 1))
		cout << "Palindrome!" << endl;
	else
		cout << "Not palindrome!" << endl;
	return 0;
}