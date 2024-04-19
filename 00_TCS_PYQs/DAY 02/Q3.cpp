/*
Question 3:

Given array of N integers , task is to replace elements with its rank in the array. 

Example 1 : 
Input: 20 15 26 2 98 6 
Output: 4 3 5 1 6 2 
Explanation: When sorted,the array is 2,6,15,20,26,98. So the rank of 2 is 1,rank of 6 is 2,rank of 15 is 3 and so... 

Example 2 : 
Input: 1 5 8 15 8 25 9 
Output: 1 2 3 5 3 6 4 
Explanation: When sorted,the array is 1,5,8,8,9,15,25. So the rank of 1 is 1,rank of 5 is 2,rank of 8 is 3 and so...
*/ 
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

void replace_elements(int arr[], int n){    
    vector<int>nums(arr, arr+n);
    sort(nums.begin(), nums.end());

    map<int, int>rank;
    for(int i = 0; i < n; i++){
        rank[nums[i]] = i;
    }

    for(int i = 0; i < n; i++){ 
        arr[i] = rank[arr[i]]+1;
    }    

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    replace_elements(arr, n);
    return 0;
}

/*
6
20 15 26 2 98 6
*/ 