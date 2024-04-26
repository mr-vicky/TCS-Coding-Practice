/*
Problem Statement: Convert a binary number to a decimal number.

Examples:

Example 1:
Input: N = 1011
Output: 11
Explanation: 1011 when converted to decimal number is “11”.

Example 2:
Input: 100
Output: 4
Explanation: 100 when converted to decimal number is “4”.
*/ 
#include <iostream>
#include <cmath>
using namespace std;

int get_binary_to_decimal(int binary){
    int decimal = 0;
    int j = 0;
    while(binary > 0){
        int temp = binary % 10;
        if(temp == 1){
            decimal += pow(2, j);
        }
        binary /= 10;
        j++;
    }
    return decimal;
}

int main(){
    int binary;
    cin >> binary;

    cout << get_binary_to_decimal(binary);
    return 0;
}