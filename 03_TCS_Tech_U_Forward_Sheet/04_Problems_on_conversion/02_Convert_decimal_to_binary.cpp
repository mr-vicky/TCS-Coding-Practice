/*
Problem Statement: Convert decimal to binary number.

Examples:

Example 1:
Input: N = 15
Output: 1111
Explanation: 15 in binary is represented as "1111".

Example 2:
Input: 18
Output: 10010
Explanation: 18 in binary is represented as "10010".
*/ 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int get_decimal_to_binary(int decimal){
    vector<int>nums;
    int binary = 0;
    while(decimal >= 1){
        int temp = decimal % 2;
        nums.push_back(temp);
        decimal /= 2;
    }
    reverse(nums.begin(), nums.end());
    for(int i = 0; i < nums.size(); i++){
        binary = (binary * 10) + nums[i];
    }
    return binary;
}

int main(){
    int decimal;
    cin >> decimal;
    cout << get_decimal_to_binary(decimal);
    return 0;
}