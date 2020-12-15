#include<stdio.h>

int validateSubsequence( int arr[], int seq[], int x, int y ) {
	int arr_i = 0;
	int seq_i = 0;
	while(arr_i < x && seq_i < y) {
		if(arr[arr_i] == seq[seq_i])
			seq_i += 1;
		arr_i +=1;
		if(arr_i == y)
			return 1;
	}
	return 0;
}

int main() {
	int x, y;
	printf("Size of larger sequence: ");
	scanf("%d", &x);
	printf("Size of smaller sequence: ");
	scanf("%d", &y);
	int arr[x];
	int seq[y];
	printf("Enter larger sequence: ");
	for(int i = 0; i < x; i++) {
		scanf("%d", &arr[i]);
	}
	printf("Enter smaller sequence: ");
	for(int i = 0; i < y; i++) {
		scanf("%d", &seq[i]);
	}
	int res = validateSubsequence(arr, seq, x, y);
	if(res)
		printf("Match!\n");
	else
		printf("No match!\n");
	return 0;
}