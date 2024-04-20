/*
Problem Statement –

Joseph is learning digital logic subject which will be for his next semester. He usually tries to solve unit assignment problems before the lecture. Today he got one tricky question. The problem statement is “A positive integer has been given as an input. Convert decimal value to binary representation. Toggle all bits of it after the most significant bit including the most significant bit. Print the positive integer value after toggling all bits”.

Constrains-

1<=N<=100

Example 1:

Input :

10  -> Integer

Output :

5    -> result- Integer

Explanation:

Binary representation of 10 is 1010. After toggling the bits(1010), will get 0101 which represents “5”. Hence output will print “5”.
*/ 

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int get_binary_to_decimal(int n){
    int res = 0;
    int j = 0;
    while(n>0){
        if(n % 10 == 1){
            
            res += pow(2, j);
        }
        n /= 10;
        j++;
    }
    return res;
}

int get_decimal_to_binary(int n){
    vector<int>binary;
    while(n >= 1){
        int temp = n % 2;
        binary.push_back(temp);
        n /= 2;
    }
    reverse(binary.begin(), binary.end());

    // Toggle the bits
    for(int i = 0; i < binary.size(); i++){
        if(binary[i] == 0){
            binary[i] = 1;
        }
        else
            binary[i] = 0;
    }

    int binary_res = 0;
    for(int i = 0; i < binary.size(); i++){
        binary_res = (binary_res * 10) + binary[i];
    }
    return binary_res;
}

int get_res(int n){
    int num_binary = get_decimal_to_binary(n);
    int res = get_binary_to_decimal(num_binary);
    return res;
}

int main(){
	int n;
	cin >> n;

    cout << get_res(n);
	return 0;
}