#include "codes.h"
#include <iostream>
#include <stack>
#include <cmath>

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

string isEven(){
	uint32_t number = 0;
	string ans = "";
	cout << "Enter Number." << endl;
	cin >> number;
	if ((number & 1) == 0)
		return "Yes";
	
	return "No";
}

string ispalindrome(){
	string s = "";
	cout << "Enter String." << endl;
	cin >> s;
	if (s.length() <=1 )
		return "Yes";

	int l = 0;
	int r = s.length() - 1;
	while (l < r){
		if (s[l] != s[r])
			return "No";
		l++;
		r--;
	}

	return "Yes";
}

string isBalanced(){
	string s = "";
	cout << "Enter String." << endl;
	cin >> s;
	if (s.length() <=1 )
		return "Yes";
	
	stack<char> st;
	for (int i = 0; i < int(s.length()); i++){
		if (s[i] == '{' || s[i] == '(' || s[i] == '[')
			st.push(s[i]);
		else if(s[i] == '}'){
			if(st.empty())
				return "No";
			if(st.top() != '{')
				return "No";
			st.pop();
		}
		else if(s[i] == ')'){
			if(st.empty())
				return "No";
			if(st.top() != '(')
				return "No";
			st.pop();
		}
		else if(s[i] == ']'){
			if(st.empty())
				return "No";
			if(st.top() != '[')
				return "No";
			st.pop();
		}
	}
	
	if (st.empty())
		return "Yes";
		
	return "No";
}

uint32_t reverseBits(){
	uint32_t ans = 0, num = 0, power = 31;
	cout << "Enter number." << endl;
	cin >> num;
	while(num){
		ans += (num & 1) << power;
		num = num>>1;
		power--;
	}
	
	return ans;
	
	/*
	num = (num >> 16) | (num << 16);
        num = ((num & 0xff00ff00) >> 8) | ((num & 0x00ff00ff) << 8);
        num = ((num & 0xf0f0f0f0) >> 4) | ((num & 0x0f0f0f0f) << 4);
        num = ((num & 0xcccccccc) >> 2) | ((num & 0x33333333) << 2);
        num = ((num & 0xaaaaaaaa) >> 1) | ((num & 0x55555555) << 1);
        return num;
	*/
}

inline bool isPerfectSquare(int x){
	int s = sqrt(x);
	return (s*s == x);
}

bool isFibonacci(){
	int num = 0;
	int check = 0;
	cout << "Enter number." << endl;
	cin >> num;
	check = 5 * num * num;
	return isPerfectSquare(check + 4) || isPerfectSquare(check -4);
}

inline void reversInPlace(string &s, int i, int j){
	while(i < j){
		swap(s[i], s[j]);
		i++;
		j--;
	}
}

string reverseSentence(){
	string s = "";
	cout << "Enter String." << endl;
	getline(cin, s);
	int i = 0, j = 0, len = s.length(), k = 0;
	while(j < len){
		i = j;
		while(i < len && s[i] == ' ')
			i++;
			
		if (i == len)
			break;
		
		
		j = i;
			
		while(j < len && s[j] != ' '){
			j++;
		}
		
		j--;
		reversInPlace(s, i, j);
		j++;
	}
	
	reversInPlace(s, 0, len-1);
	i = 0;
	while(s[i] == ' '){
		i++;
	}
	
	while(i < len){
		s[k] = s[i];
		k++;
		i++;	
	}
	
	while(k < len){
		s[k] = ' ';
		k++;
	}
		
  	return s;
  	
}

string returnEndian(){
	int n = 1;
	if (*(char*)&n)
		return "Little Endian.";
		
	return "Big Endian";
	
}

string isPowerOfTwo(){
	uint32_t num = 0;
	cout << "Enter number." << endl;
	cin >> num;
	if (num <= 0)
		return "False";
		
	if((num & (num-1)) == 0)
		return "True";
		
	return "False";

}






































