#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include "codes.h"

using namespace std;

int main(int argc, char* argv[]){
	if (argc < 2){
		cerr << "Usage: " << argv[0] << " <Option Number>" << endl;
		cerr << "To see all the options!" << endl;
		cerr << "Run " << argv[0] << " -h" << endl;
		return 1;
	}

	if (argc == 2 and string(argv[1]) == "-h"){
		cerr << "Usage: " << argv[0] << " <Option Number>" << endl;
		cout << "Option: Definition" << endl;
		cout << "1: " << "Find set bits in a number." << endl;
		cout << "2: " << "Find number of bits to convert A to B." << endl;
		cout << "3: " << "Reverse a string." << endl;
		return 1;
	}

	switch(atoi(argv[1])){
		case 1: {
			cout << "Find set bits of a number." << endl;
			int ans = findSetBits();
			cout << "ANS: " << ans << endl;
			return 0;
			}
		case 2: {
			cout << "Find number of bits to convert A to B." << endl;
			int ans = findDiffBits();
			cout << "ANS: " << ans << endl;
			return 0;
			}

		case 3: {
			cout << "Reverse a string." << endl;
			string ans = reverseString();
			cout << "ANS: " << ans << endl;
			return 0;
			}

		default: 
			cerr << "Usage: " << argv[0] << " <Option Number>" << endl;
			cerr << "To see all the options!" << endl;
			cerr << "Run " << argv[0] << " -h" << endl;
			return 1;


	}
		
	return 0;
}
