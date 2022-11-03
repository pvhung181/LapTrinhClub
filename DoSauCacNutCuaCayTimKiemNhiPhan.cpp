#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

struct node {
	int data;
	node* left;
	node* right;
};

node* makeNode(int x) {
	node* newNode = new node();
	newNode->data = x;
	newNode->left = newNode->right = nullptr;
	return newNode;
}

priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;

class tree {
	private:
		node* root;
	public:
		tree() {
			root = nullptr;
		}
		void insert(node *&p, int x) {
			if(p == nullptr) {
				p = makeNode(x);
				return;
			}
			else {
				if(x < p->data) insert(p->left, x);
				else insert(p->right, x);
			}
		}
		node* &getRoot() {
			return root;
		}
		
		void traverse(node* p, int k = 0) {
			if(p == nullptr) return;
			q.push({p->data, k});
			traverse(p->left, k+1);
			traverse(p->right, k+1);
		}
};

int main()
{
	_fastio;
	tree t;
	int n; cin >> n;
	bool check[10005] = {};
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		if(!check[x]) {
			t.insert(t.getRoot(), x);
			check[x] = true;
		}
	}
	t.traverse(t.getRoot());
    while(q.size()) {
    	cout << q.top().fi << ' ' << q.top().se << endl;
    	q.pop();
	}
}


