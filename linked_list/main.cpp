#include <bits/stdc++.h>
#include "linked_list.h"

using namespace std;

int main()
{
	linkedlist* l1 = new linkedlist(1);
	l1->insert(2);
	l1->insert(3);
	l1->insert(4);
	l1->insert(5);
	cout << "list: " << *l1;
	reverseList(*l1);
	cout << "Reversed list: " << *l1;
	cout << "MAX: " << l1->getMax() << endl;
	cout << "Middle: " << findMiddleVal(*l1) << endl;
	cout << "Middle Node: " << findMiddleNode(*l1)->val << endl;
	cout << "Size: " << findSize(*l1) << endl;

	linkedlist* l2 = new linkedlist(10);
	l2->insert(*l1);
	cout << "New list: " << *l2;

	//linkedlist* l3 = mergeList(l1, l2);
	//cout << "Merged list: " << *l3;
	return 0;
}
