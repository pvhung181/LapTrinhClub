#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

struct node {
	int data;
	vector<node*> child;
	node(int value) {
		data = value;
		for(int i = 1; i <= sqrt(value); i++) {
			if(value % i == 0) {
				child.push_back(new node((i - 1) * (value/i + 1)));
			}
		}
	}
};

void preOrder(node* root) {
	cout << root->data << ' ';
	for(int i = 0; i < root->child.size(); i++) preOrder(root->child[i]);
}

void inOrder(node* root) {
	if(root->child.size()) inOrder(root->child[0]);
	cout << root->data << ' ';
	for(int i = 1; i < root->child.size(); i++) inOrder(root->child[i]);
}

void posOrder(node* root) {
	for(int i = 0; i < root->child.size(); i++) posOrder(root->child[i]);
	cout << root->data << ' ';
}

int main()
{
	_fastio;
	int n; cin >> n;
	node *root = new node(n);
	preOrder(root); cout << endl;
	inOrder(root); cout << endl;
	posOrder(root);
}


