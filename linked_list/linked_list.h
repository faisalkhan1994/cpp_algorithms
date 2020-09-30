#include <bits/stdc++.h>
#include <iostream>

struct sll{
	int val;
	sll* next;
	sll(int x): val(x), next(NULL){}
};

class linkedlist{
	private:
		sll* head;
	public:
		linkedlist(){this->head = NULL;}
		linkedlist(int num){this->head = new sll(num);}
		sll* getHead() const {return head;}
		void insert(int num);
		void insert(linkedlist& ll);
		void setHead(sll* h){this->head = h;}
		int getMax();
		void sortList();
};

std::ostream& operator<<(std::ostream& os, const linkedlist& ll);
void reverseList(linkedlist& ll);
int findMiddleVal(linkedlist& ll);
sll* findMiddleNode(linkedlist& ll);
int findSize(linkedlist& ll);
linkedlist* mergeList(linkedlist* l1, linkedlist* l2);
