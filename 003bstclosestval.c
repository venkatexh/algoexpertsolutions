#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct node {
	int data;
	struct node *left;
	struct node *right;
};

struct node *createNode(int key) {
	struct node *new = (struct node*)malloc(sizeof(struct node));
	new->data = key;
	new->left = new->right = NULL;
	return new;
}

struct node *insert(struct node *node, int key) {
	if(node == NULL) 
		return createNode(key);
	if(key < node->data){
		node->left = insert(node->left, key);
	} else if(key > node->data) {
		node->right = insert(node->right, key);
	}
	return node;
}

void inorder(struct node *temp) {
	if(temp == NULL)
		return;
	inorder(temp->left);
	printf("Closest number is %d ", temp->data);
	inorder(temp->right);
}

int checkDiff(int a, int b) {
	return a>b? a-b : b-a;
}

int closestNumber(struct node *node, int key) {
	if(node == NULL)
		return 0;
	
	if(node->data == key)
		return key;
	
	struct node *p = node;
	int curr, diff;
	diff = INT_MAX;
	
	while(p!=NULL) {
		if(checkDiff(p->data, key) < diff){
			diff = checkDiff(p->data, key);
			curr = p->data;
		}
		
		if(key > p->data)
			p = p->right;
		else
			p = p->left;
	}
	return curr;
}

int main() {
	struct node *root = NULL;
	root = insert(root, 10);
	root = insert(root, 7);
	root = insert(root, 14);
	root = insert(root, 18);
	root = insert(root, 3);
	root = insert(root, 8);
	root = insert(root, 12);
	inorder(root);
	printf("\n");
	int x;
	printf("Enter number to find closest number: ");
	scanf("%d", &x);
	printf("%d\n", closestNumber(root, x));
	return 0;
}
