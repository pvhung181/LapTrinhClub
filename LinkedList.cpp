#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

using namespace std;

typedef long long ll;

struct node {
	int value;
	node *next;	
};

node* makeNode(int x) {
		node* tmp = new node();
		tmp->value = x;
		tmp->next = nullptr;
		return tmp;
}

class linkedList {
	private:
		node *head;
	public:
		linkedList() {
			head = nullptr;
		}
		
		linkedList(node *x) {
			head = x;
		}
		
		void traverse();
		void push_front(int) ;
		void push_back(int);
		void insert(int, int);
		int &front();
		int &back();
		bool empty();
		int size();
		void pop_back();
		void pop_front();
};


void linkedList::traverse() {
	node *tmp = head;
	while(tmp != NULL) {
		cout << tmp->value << ' ';
		tmp = tmp->next;
	}
}

int&linkedList::front() {
	return head->value;
}
		

int& linkedList::back() {
	node* tmp = head;
	while(tmp->next != NULL) {
		tmp = tmp->next;
	}
	return tmp->value;
}

void linkedList::push_front(int x) {
	node *newNode = makeNode(x);
	newNode->next = head;
	head = newNode;
}

void linkedList::push_back(int x) {
	node *newNode = makeNode(x);
	node* tmp = head;
	if(head == NULL) {
		head = newNode;
		return;
	} 
	while(tmp->next != NULL) {
		tmp = tmp->next;
	}
	
	tmp->next = newNode;
}

bool linkedList::empty() {
	return (head == NULL) ? 1 : 0;
}

int linkedList::size() {
	int s = 0;
	node* tmp = head;
	if(head == NULL) return 0;
	while(tmp != NULL) {
		s++;
		tmp = tmp->next;
	}
	return s;
}

void linkedList::insert(int pos, int x) {
	if(pos < 1 || pos > size() + 1) return;
	if(pos == 1) {
		push_front(x);
		return;
	}
	node *tmp = head;
	for(int i = 1; i < pos - 1; i++) tmp = tmp->next;
	node *newNode = makeNode(x);
	newNode->next = tmp->next;
	tmp->next = newNode;
}

void linkedList::pop_front() {
	if(head == NULL) return;
	node* tmp = head;
	head = head->next;
	delete tmp;
}

void linkedList::pop_back() {
	if(head == NULL) return;
	node* tmp = head;
	if(tmp->next == NULL) {
		head = NULL;
		delete tmp;
		return;
	}
	while((tmp->next)->next != NULL) tmp = tmp->next;
	node *last = tmp->next;
	tmp->next = NULL;
	delete last;
}


int main()
{
	linkedList a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(4);
	a.push_back(7);
	a.push_back(5);
	a.push_back(1);
    a.pop_back();
    a.traverse();
}


