/*
Question 2:

Perform bitwise OR and return the number of distinct values. bitwise OR will be performed on the subarray of an input array.
Input:
[1,2,3]
Output:
3
*/ 
#include <iostream>
#include <vector>
using namespace std;

int get_bitwise_or(vector<int>nums){
    int res = nums[0];
    int n = nums.size();

    for(int i = 1; i < n; i++){
        res = res | nums[i];
    }
    return res;
}

int main(){
    int n;
    vector<int>nums;
    while(cin >> n){
        nums.push_back(n);
    }
    cout << get_bitwise_or(nums);
    return 0;
}