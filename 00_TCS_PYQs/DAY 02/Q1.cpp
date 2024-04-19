/*
Question 1: 

Given an array of integers, find the nearest smallest number for every element such that the smaller element is on the left side.
Input: {1,6,4,10,2,5}
Output: {-1,1,1,4,1,2}

Input: {3,2,1}
Output: {-1,-1,-1}
*/ 
#include <iostream>
#include <vector>
using namespace std;

void get_nearest_smallest_numbers(int arr[], int n){
    vector<int>res; 
    res.push_back(-1);
    for(int i = 1; i < n; i++){
        int j = i-1;
        while(j >= -1){ 
            if(arr[i] > arr[j]){
                res.push_back(arr[j]);
                break;
            }
            else if(j == -1){
                res.push_back(-1);
            }
            j--;
        }  
    }
    for(auto x: res) cout << x << " ";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    get_nearest_smallest_numbers(arr, n);
    return 0;
}