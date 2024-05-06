/*
Question 1:

You are given two integers, m and n. Your task is to find the sum of the cubes of all integers from m to n, inclusive.
Write a function sum_of_power_of_cubes(m, n) that takes in two integers m and n, where m is the higher range and n is the lower range, and returns the sum of the cubes of all integers from m to n.

Input:
2
5
Output:
224
*/ 
#include <iostream>
using namespace std;

long long sum_of_power_of_cubes(int n, int m){
    long long int sum = 0;
    for(int i = n; i <= m; i++){
        sum += (i*i*i);
    }
    return sum;
}

int main(){
    int n, m;
    cin >> n >> m;

    cout << sum_of_power_of_cubes(n, m);
    return 0;
}