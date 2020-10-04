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
		cout << "4: " << "Is the number even." << endl;
		cout << "5: " << "Is Palindrome." << endl;
		cout << "6: " << "Is Paranthesis Balanced." << endl;
		cout << "7: " << "Byte reverse of an uint32_t integer." << endl;
		cout << "8: " << "Is Fibonacci." << endl;
		cout << "9: " << "Compare size of union and struct." << endl;
		cout << "10: " << "Reverse a sentence" << endl;
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

		case 4: {
			cout << "Is the number even." << endl;
			string ans = isEven();
			cout << "ANS: " << ans << endl;
			return 0;
			}

		case 5: {
			cout << "Is Palindrome." << endl;
			string ans = ispalindrome();
			cout << "ANS: " << ans << endl;
			return 0;
			}

		case 6: {
			cout << "Is Paranthesis Balanced." << endl;
			string ans = isBalanced();
			cout << "ANS: " << ans << endl;
			return 0;
			}
			
		case 7: {
			cout << "Byte reverse of an uint32_t integer." << endl;
			uint32_t ans = reverseBits();
			cout << "ANS: " << ans << endl;
			return 0;
			}
			
		case 8: {
			cout << "Is Fibonacci." << endl;
			bool ans = isFibonacci();
			cout << "ANS: " << ans << endl;
			return 0;
			}
			
		case 9: {
			cout << "Compare size of union and struct with same(int, char, float) members." << endl;
			s s1;
			u u1;
			cout << "Size of struct: " << sizeof(s1) << endl;
			cout << "Size of union: " << sizeof(u1) << endl;
			return 0;
			}
			
		case 10: {
			cout << "reverse a sentence." << endl;
			string ans = reverseSentence();
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
