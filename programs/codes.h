#ifndef CODES_H
#define CODES_H
#include <string>

struct s{
	int a;
	char b;
	float c;
};

union u{
	int a;
	char b;
	float c;
};

int findSetBits();

int findDiffBits();

std::string reverseString();

std::string isEven();

std::string ispalindrome();

std::string isBalanced();

uint32_t reverseBits();

bool isFibonacci();

std::string reverseSentence();

std::string returnEndian();

std::string isPowerOfTwo();

#endif /*CODES_H*/
