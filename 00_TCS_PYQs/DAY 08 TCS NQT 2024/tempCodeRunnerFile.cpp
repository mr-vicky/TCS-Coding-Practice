/*
Question 1:

Print the sum of first n fibonacci numbers in the series.

Input:
5
Output:
7
*/

#include <iostream>
#include <vector>
using namespace std;

// 0 1 1 2 3 5 8 

int get_sum_of_n_fibonacci_numbers(int n){
    int sum = 0;
    vector<int>fibo(n, 0);
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i <= n ; i