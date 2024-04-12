#include<iostream>
#include<climits>
using namespace std;

int get_largest(int arr[], int n){
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int second_largest(int arr[], int n){
    int sec_largest = INT_MIN;
    int maxi = get_largest(arr, n);
    for(int i = 0; i < n; i++){
        if(arr[i] != maxi){
            sec_largest = max(sec_largest, arr[i]);
        }
    }
    return sec_largest;
}

int main(){
    int n; 
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << second_largest(arr, n);
    return 0;
}