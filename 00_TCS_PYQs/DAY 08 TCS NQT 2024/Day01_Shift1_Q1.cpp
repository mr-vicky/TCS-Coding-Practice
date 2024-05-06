/*Question 1:

Given an unsorted array of integers, find a subarray that adds to a given number. If there is more than one subarray with the sum of the given number, print any of them.

Input:
arr[] = {1, 4, 20, 3, 10, 5}
sum = 33
Output:
20 3 10



Input:
arr[] = {10, 2, -2, -20, 10}
sum = -10
Output:
10 2 -2 -20
*/ 
#include <iostream>
using namespace std;

void get_subarray(int arr[], int n, int sum){
    int start = 0;
    int end = 0;
    bool flag = false;
    for(int i = 0; i < n; i++){
        int curr_sum = 0;
        for(int j = i; j < n; j++){
            curr_sum += arr[j];
            if(curr_sum == sum){
                start = i;
                end = j;
                flag = true;
                break;
            }
        }
        if(flag == true) break;
    }
    for(int i = start; i <= end; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n, sum;
    cin >> n >> sum;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    get_subarray(arr, n, sum);
    return 0;
}

/*
6 33
1 4 20 3 10 5
*/ 