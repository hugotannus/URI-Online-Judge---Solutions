#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node *left;
	Node *right;
};

Node *tree;

void insert (int value){
	// cout << "inserting " << value << ":" << endl;
	if(tree == NULL) {
		tree = new Node;
		tree->data = value;
		tree->left = tree->right = NULL;

		return;
	}
	Node *parent;
	Node *cur = tree;

	while(cur != NULL) {
		// cout << " " << cur->data;
		parent = cur;
		if(value < cur->data) 
			cur = cur->left;
		else
			cur = cur->right;
	}
	// cout << endl;
	cur = new Node;
	cur->data = value;
	cur->left = cur->right = NULL;
	if(value < parent->data)
		parent->left = cur;
	else
		parent->right = cur;
}

void pre_order(Node *node) {
	cout << " " << node->data;
	if(node->left) pre_order(node->left);
	if(node->right) pre_order(node->right);
}

void in_order(Node *node) {
	if(node->left) in_order(node->left);
	cout << " " << node->data;
	if(node->right) in_order(node->right);
}

void post_order(Node *node) {
	if(node->left) post_order(node->left);
	if(node->right) post_order(node->right);
	cout << " " << node->data;
}

int main() {
	ios_base::sync_with_stdio(false);
	int C, N, x;

	cin >> C;

	for(int c=1; c <= C; c++) {
		cout << "Case " << c << ":\n";
		cin >> N;
		tree = NULL;
		
		for(int i=0; i<N; i++) {
			cin >> x;
			// cout << x << " read." << endl;
			insert(x);
		}
		cout << "Pre.:";
		pre_order(tree); cout << endl;
		cout << "In..:";
		in_order(tree); cout << endl;
		cout << "Post:";
		post_order(tree); cout << endl;

		cout << endl;
	}

	return 0;
}