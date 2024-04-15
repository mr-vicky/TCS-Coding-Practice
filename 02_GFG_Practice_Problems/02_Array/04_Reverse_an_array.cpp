#include<iostream>
using namespace std;

// TC: O(n)
// SC: O(1)
void reverse(int arr[], int n){
    int i = 0;
    int j = n-1;

    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(auto x: arr) cout << x << " ";
    cout << endl;
    reverse(arr, n);
    for(auto x: arr) cout << x << " ";
    cout << endl;
    return 0;
}