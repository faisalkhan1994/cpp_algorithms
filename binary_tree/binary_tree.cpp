#include "binary_tree.h"
#include <iostream>
#include <stack>

using namespace std;

void RprintInorder(node* root){
	if (!root){
		return;
	}
	
	
	RprintInorder(root->left);
	cout << root->val << " ";
	RprintInorder(root->right);
}

void RprintPreorder(node* root){
	if (!root){
		return;
	}
	
	cout << root->val << " ";
	RprintPreorder(root->left);
	RprintPreorder(root->right);
}

void RprintPostorder(node* root){
	if (!root){
		return;
	}
	
	RprintPostorder(root->left);
	RprintPostorder(root->right);
	cout << root->val << " ";
}

void IprintInorder(node* root){
	if (!root){
		return;
	}
	
	stack<node*> s;
	node* curr = root;
	while(curr || !s.empty()){
		while(curr){
			s.push(curr);
			curr = curr->left;
		}
		
		curr = s.top();
		s.pop();
		cout << curr->val << " ";
		curr = curr->right;
	}
}

void IprintPreorder(node* root){
	if (!root){
		return;
	}
	
	stack<node*> s;
	node* curr = root;
	while(!s.empty() || curr){
		while(curr){
			cout << curr->val << " ";
			if(curr->right)
				s.push(curr->right);
			curr = curr->left;
		}
		
		if(!s.empty()){
			curr = s.top();
			s.pop();
		}
	}
}

void IprintPostorder(node* root){
	if (!root){
		return;
	}
	
	stack<node*> s1, s2;
	node* curr;
	s1.push(root);
	while(!s1.empty()){
		curr = s1.top();
		s1.pop();
		s2.push(curr);
		/*while(curr){
			//cout << curr->val << " ";
			if(curr->right)
				s.push(curr->right);
			s.push(curr);
			curr = curr->left;
		}*/
		
		if(curr->left)
			s1.push(curr->left);
		if(curr->right)
			s1.push(curr->right);
	}
	
	while(!s2.empty()){
		curr = s2.top();
		s2.pop();
		cout << curr->val << " ";
	}
}

void printInorder(Btree &tree){
	if(!tree.getRoot()){
		cout << "Empty tree!" << endl;
		return;
	}
	
	int choice;
	cout << "Print using Recursion(1) or Iteration(2)" << endl;
	cin >> choice;
	cout << endl;
	switch(choice){
		case 1: RprintInorder(tree.getRoot());
			break;
		case 2: IprintInorder(tree.getRoot());
			break;
		default:
			IprintInorder(tree.getRoot());
	}
}

void printPreorder(Btree &tree){
	if(!tree.getRoot()){
		cout << "Empty tree!" << endl;
		return;
	}
	
	int choice;
	cout << "Print using Recursion(1) or Iteration(2)" << endl;
	cin >> choice;
	cout << endl;
	switch(choice){
		case 1: RprintPreorder(tree.getRoot());
			break;
		case 2: IprintPreorder(tree.getRoot());
			break;
		default:
			IprintPreorder(tree.getRoot());
	}
}

void printPostorder(Btree &tree){
	if(!tree.getRoot()){
		cout << "Empty tree!" << endl;
		return;
	}
	
	int choice;
	cout << "Print using Recursion(1) or Iteration(2)" << endl;
	cin >> choice;
	cout << endl;
	switch(choice){
		case 1: RprintPostorder(tree.getRoot());
			break;
		case 2: IprintPostorder(tree.getRoot());
			break;
		default:
			IprintPostorder(tree.getRoot());
	}
}

void print(Btree &tree){
	if(!tree.getRoot()){
		cout << "Empty tree!" << endl;
		return;
	}
	
	int choice;
	cout << "Print using Inorder(1) or PreOrder(2) or PostOrder(3)" << endl;
	cin >> choice;
	cout << endl;
	switch(choice){
		case 1: printInorder(tree);
			break;
		case 2: printPreorder(tree);
			break;
		case 3: printPostorder(tree);
			break;
		default:
			IprintInorder(tree.getRoot());
	}
}

node* recurInsert(node* root, int val){
	if (!root)
		return new node(val);
		
	if(val > root->val)
		root->right = recurInsert(root->right, val);
	else
		root->left = recurInsert(root->left, val);
		
	return root;		
}

void iterInsert(node* root, int val){
	node* newNode = new node(val);
	node* prevNode = NULL;
	
	while(root){
		prevNode = root;
		if(val < root->val)
			root = root->left;
		else
			root = root->right;
	}
	
	if (!prevNode)
		prevNode = newNode;
	else if(prevNode->val > val)
		prevNode->left = newNode;
	else
		prevNode->right = newNode;
		
	//return root;		
}

void Btree::insert(int num){
	if(!root){
		root = new node(num);
		return;
	}
	
	int choice = 1;
	//cout << "Using Recursion(1) or Iteration(2)" << endl;
	//cin >> choice;
	//cout << endl;
	switch(choice){
		case 1: this->root = recurInsert(root, num);
			break;
		case 2: iterInsert(this->root, num);
			break;
		default:
			iterInsert(this->root, num);
	}
	
	
}

bool search(node* root, int key){
	if (root == NULL)
		return false;

	if(root->val == key)
		return true;

	if (root->val < key) 
		return search(root->right, key); 

	return search(root->left, key); 
}

bool Btree::searchNode(int key) 
{
    return search(root, key); 
}

































