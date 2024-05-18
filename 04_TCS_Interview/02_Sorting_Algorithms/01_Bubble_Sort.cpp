#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        bool flag = 0;
        for(int j = 0; j < n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag = 1;
            }
        }
        if(flag == 0) break;
    }
}

int main(){
    int arr[]{1, 6, 3, 2, 7, 8, 11, 99, 20, 0};
    int n = 10;

    for(auto x: arr) cout << x << " ";
    cout << endl;

    bubble_sort(arr, n);

    for(auto x: arr) cout << x << " ";
    cout << endl;

}