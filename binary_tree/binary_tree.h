#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <bits/stdc++.h>
#include <iostream>

struct node{
	int val;
	node* left;
	node* right;
	node(int x): val(x), left(NULL), right(NULL){}
};

class Btree{
	private:
		node* root;
	public:
		Btree(){this->root = NULL;}
		Btree(int num){this->root = new node(num);}
		node* getRoot() const {return root;}
		void insert(int num);
		void insert(node* n);
		void setHead(node* h){this->root = h;}
		int getMax();
		void sortList();
		bool searchNode(int key);
};

void print(Btree &tree);

#endif /*BINARY_TREE_H*/
