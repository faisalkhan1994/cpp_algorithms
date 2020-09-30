#include "linked_list.h"

using namespace std;

ostream& operator<<(ostream& os, const linkedlist& ll){
	sll* curr = ll.getHead();
	if (curr == NULL){
		os << "Empty list!" << endl;
		return os;
	}
		
	while(curr != NULL){
		os << curr->val << " ";
		curr = curr->next;
	}

	os << endl;
	return os;
}

void linkedlist::insert(int num){
	if (this->getHead() == NULL){
		this->head = new sll(num);
		return;
	}

	sll* curr = this->getHead();
	while(curr->next != NULL){
		curr = curr->next;
	}

	curr->next = new sll(num);
}

void linkedlist::insert(linkedlist& ll){
	if (this->getHead() == NULL){
		this->setHead(ll.getHead());
		return;
	}

	sll* curr = this->getHead();
	while(curr->next != NULL){
		curr = curr->next;
	}

	curr->next = ll.getHead();
}

int linkedlist::getMax(){
	if (this->getHead() == NULL){
		return 0;
	}
	int max = 0;
	sll* curr = this->getHead();
	while(curr != NULL){
		if (curr->val >= max)
			max = curr->val;
		curr = curr->next;
	}

	return max;
}

void linkedlist::sortList(){
	/*if (this->getHead() == NULL){
		return;
	}
	int max = 0;
	sll* curr = this->getHead();
	while(curr != NULL){
		if (curr->val >= max)
			max = curr->val;
		curr = curr->next;
	}

	return max;*/
}

void reverseList(linkedlist& ll){
	if (ll.getHead() == NULL){
		return;
	}

	sll* curr = ll.getHead(), *temp = NULL, *prev = NULL;
	while(curr != NULL){
		temp = curr->next;
		curr->next = prev;
		prev = curr;
		curr = temp;
	}

	ll.setHead(prev);
}

int findMiddleVal(linkedlist& ll){
	if (ll.getHead() == NULL){
		return 0;
	}

	sll* slow = ll.getHead(), *fast = ll.getHead();
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow->val;
}

sll* findMiddleNode(linkedlist& ll){
	if (ll.getHead() == NULL){
		return 0;
	}

	sll* slow = ll.getHead(), *fast = ll.getHead();
	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}

int findSize(linkedlist& ll){
	if (ll.getHead() == NULL){
		return 0;
	}
	int size = 0;
	sll* slow = ll.getHead();
	while(slow != NULL){
		size++;
		slow = slow->next;
	}

	return size;
}

/*linkedlist* mergeList(linkedlist* l1, linkedlist* l2){
	linkedlist* m = new linkedlist(0);
	m->insert(*l1);
	m->insert(*l2);
	/*sll* curr = l1.getHead();
	while(curr){
		curr = curr->next;
	}

	curr = l2.getHead();
	return m;
}*/
