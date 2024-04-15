#include <iostream>
using namespace std;

class Solution{
    public: 
        // Method 1:
        // TC: O(n)
        // SC: O(1)
        void left_rotate_by_one(int arr[], int n){
            int temp = arr[0];
            for(int i = 0; i < n-1; i++){   
                arr[i] = arr[i+1];
            }
            arr[n-1] = temp;

            for(int i = 0; i < n; i++) cout << arr[i] << " "; 
            cout << endl;
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
    s.left_rotate_by_one(arr, n);
}