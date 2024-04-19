/*
Question 2:

Given an array of integers, find an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. If no such index exists, return -1.

Input: [-7, 1, 5, 2, -4, 3, 0]
Output: 3
Explaination: Index 3 is an equilibrium index because the sum of elements on the left, -7+1+5=-1, is equal to the sum of elements on the right, -4+3+0=-1.

*/ 
#include <iostream>
using namespace std;

// TC: O(n)
// SC: O(n)
int is_equilibrium_point(int arr[], int n){
    int pref_sum[n];
    int suff_sum[n];

    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        pref_sum[i] = sum;
    }

    sum = 0;
    for(int i = n-1; i >= 0; i--){
        sum += arr[i];
        suff_sum[i] = sum;
    }

    for(int i = 0; i < n; i++){
        if(pref_sum[i] == suff_sum[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << is_equilibrium_point(arr, n) << endl;
    return 0;
}