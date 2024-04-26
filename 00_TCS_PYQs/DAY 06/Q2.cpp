/*
Question 2:

Given a square matrix, calculate the absolute difference between the sums of its diagonals.

123
456
989

The left-to-right diagonal = 1+5+9 = 15, The right to left diagonal = 3+5+9 = 17, Their absolute difference is [15-17] = 2

Sample Input:
3
11 2 4
4 5 6
10 8 -12

Sample Output:
15
*/ 
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int get_absolute_difference(vector<vector<int>>nums, int m, int n){
    int d1 = 0;
    int d2 = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                d1 += nums[i][j];
            }
            if(i + j == n-1){
                d2 += nums[i][j];
            }
        }
    }
    int res = abs(d1 - d2);
    return res;
}

int main(){
    int n, m;
    cin >> m;
    n = m;
    vector<vector<int>>nums;
    for(int i = 0; i < m; i++){
        vector<int>arr;
        for(int j = 0; j < n; j++){
            int temp = 0;
            cin >> temp;
            arr.push_back(temp);
        }
        nums.push_back(arr);
    }

    cout << get_absolute_difference(nums, m, n);
    return 0;
}