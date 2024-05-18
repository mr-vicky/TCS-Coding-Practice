#include <iostream>
using namespace std;

// TC: O(log(n))
// SC: O(1)
// Best case TC: O(1)
// Average case TC: log(n)
// Worst case TC:  log(n)
int binary_search(int arr[], int n, int key){
    int low = 0;
    int high = n - 1;

    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key)
            high = mid - 1;
        else 
            low = mid + 1;
    }
    return -1;
}

int main(){
    int arr[] = {1, 3, 5, 6, 7, 9};
    int n = 6;
    int key = 5;
    cout << binary_search(arr, n, key);
    return 0;
}