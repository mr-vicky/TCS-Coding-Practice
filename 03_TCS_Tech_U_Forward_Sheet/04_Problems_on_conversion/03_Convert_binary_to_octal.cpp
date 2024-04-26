/*
Problem Statement: Convert a binary number to an octal number

Examples:

Example 1:.
Input: N = 1100110
Output: 146
Explanation: 1100110 when converted to octal number is “146”.

Example 2:
Input: 11111
Output: 37
Explanation: 11111 when converted to octal number is “37”.
*/

#include <iostream>
#include <vector>
using namespace std;

int convert_to_octal(int binary){
	vector<int>nums;
	int octal = 0;
	// int decimal = convert_to_decimal(binary);
	int decimal = 394;
	while(decimal >= 8){
		int temp = decimal % 8;
        cout << temp << " ";
		nums.push_back(temp);
		decimal /= 8;
	}
	return octal;
}

int main(){

	int binary;
	cin >> binary;

	convert_to_octal(binary);
    cout << endl << endl;
	return 0;
}