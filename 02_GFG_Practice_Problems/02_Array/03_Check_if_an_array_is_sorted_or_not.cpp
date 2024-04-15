#include<iostream>
using namespace std;

class Solution{
    public: 
        // It only checks that array is sorted in Increasing order or not
        bool is_sorted(int arr[], int n){
            for(int i = 1; i < n; i++){
                if(arr[i] < arr[i-1]){
                    return false;
                }
            }
            return true;
        }
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Solution s;
    cout << boolalpha << s.is_sorted(arr, n);
    return 0;
}