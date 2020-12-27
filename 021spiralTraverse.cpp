#include<bits/stdc++.h>

using namespace std;

void spiral_traverse(int arr[4][4], int p, int q) {
	int startRow = 0, endRow = p - 1;
	int startCol = 0, endCol = q - 1;
	while(startRow <= endRow && startCol <= endCol) {
		int i = 0;
		for(i = startCol; i < endCol; i++)
			printf("%d\t", arr[startRow][i]);
		for(i = startRow; i < endRow; i++)
			printf("%d\t", arr[i][endCol]);
		for(i = endCol; i > startCol; i--)
			printf("%d\t", arr[endRow][i]);
		for(i = endRow; i > startRow; i--)
			printf("%d\t", arr[i][startCol]);
		
		startRow += 1;
		startCol += 1;
		endRow -= 1;
		endCol -= 1;
	}
	return;
}

int main() {
	int arr[4][4] = { {1,2,3,4}, {12,13,14,5}, {11,16,15,6}, {10,9,8,7}};
	spiral_traverse(arr, 4, 4);
	return 0;
}