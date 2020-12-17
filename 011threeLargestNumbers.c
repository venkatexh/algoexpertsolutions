#include<stdio.h>

void findNumbers(int A[], int n, int B[]) {
	B[2] = A[0];
	for(int i = 1; i < n; i++) {
		if(A[i] > B[2]) {
			B[0] = B[1];
			B[1] = B[2];
			B[2] = A[i];
		} else if(A[i] > B[1]) {
			B[0] = B[1];
			B[1] = A[i];
		} else if(A[i] > B[0]) {
			B[0] = A[i];
		}
	}
	
}

int main() {
	int n;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int arr[n], res[3];
	printf("Enter array elements:\n");
	for(int i =0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < 3; i++) {
		res[i] = 0;
	}
	findNumbers(arr, n, res);
	printf("Three largest numbers: \n");
	for(int i = 0; i < 3; i++) {
		printf("%d\t", res[i]);
	}
	printf("\n");
	return 0;
}