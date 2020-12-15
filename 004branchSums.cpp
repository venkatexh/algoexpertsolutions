#include<bits/stdc++.h>
using namespace std;

class node {
	public: 
	int data;
	node* left;
	node* right;
};

node* newNode(int data) {
	node* Node = new node();
	Node->data = data;
	Node->left = Node->right = NULL;
	return Node;
}

void branchSumUtil(node* root, int sum) {
	if(root == NULL) {
		return;
	}
	sum = sum + root->data;
	
	if(root->left == NULL && root->right == NULL) {
		printf("%d\n", sum);
		return;
	}
	
	branchSumUtil(root->left, sum);
	branchSumUtil(root->right, sum);
}

void branchSum(node* root) {
	branchSumUtil(root, 0);
}

int main() {
	
	node* root = newNode(6);
	root->left = newNode(3);
	root->right = newNode(5);
	root->left->left = newNode(2);  
    root->left->right = newNode(5);  
    root->right->right = newNode(4);  
    root->left->right->left = newNode(7);  
    root->left->right->right = newNode(4); 
	branchSum( root);
	return 0;
}