//Author : Sarvesh
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define f(x, n) for (int x = 0; x < n; ++x)
#define f1(x, n) for (int x = 1; x <= n; ++x)
#define ed endl;

class node {
public:
	int data;
	node *next;
	node(int val) {
		data = val;
		next = NULL;
	}
};

int main() {
#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	node *head;
	head = NULL;
	node *n = new node(1);
	if (head == NULL) {
		head = n;
	}
	//head->next = n;
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
}