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

// Fibonacci Series 
// 0 1 1 2 3 5 8 13...

// TC: O(n^2)
// SC: O(n)
int get_sum_of_n_fibonacci_numbers(int n){
    int sum = 0;
    vector<int>fibo(n, 0);
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i <= n ; i++){
        fibo[i] = fibo[i-1] + fibo[i-2];
    }
    for(int i = 0; i < n; i++)
        sum += fibo[i];
    return sum;
}

int main(){
    int n;
    cin >> n;
    cout << get_sum_of_n_fibonacci_numbers(n);
}