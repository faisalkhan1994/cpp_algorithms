#include "codes.h"
#include <iostream>

using namespace std;

int findSetBits(){
	uint32_t number = 0;
	int count = 0;
	cout << "Enter Number." << endl;
	cin >> number;
	while(number){
		number &= (number-1);
		count++;
	}

	return count;
}

int findDiffBits(){
	uint32_t a = 0, b = 0, number = 0;
	int count = 0;
	cout << "Enter two numbers" << endl;
	cin >> a;
	cin >> b;
	number = a^b;
	while(number){
		number &= (number-1);
		count++;
	}

	return count;
}

string reverseString(){
	string s = "";
	cout << "Enter String." << endl;
	cin >> s;
	if (s.length() <=1 )
		return s;

	int l = 0;
	int r = s.length() - 1;
	while (l < r){
		swap(s[l], s[r]);
		l++;
		r--;
	}

	return s;
}
