#include <bits/stdc++.h>
#include "binary_tree.h"

using namespace std;

int main()
{
	Btree b1;
	//printInorder(b1);
	b1.insert(4);
	b1.insert(2);
	b1.insert(6);
	b1.insert(1);
	b1.insert(3);
	b1.insert(5);
	b1.insert(7);
	print(b1);
	return 0;
}
