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

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << get_largest(arr, n);
    return 0;
}