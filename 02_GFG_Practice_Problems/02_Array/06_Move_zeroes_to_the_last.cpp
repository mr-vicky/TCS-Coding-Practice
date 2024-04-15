#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        // Method 1: 
        // TC: O(n^2)
        // SC: O(1)
        void move_zeroes1(int arr[], int n){
            for(int i = 0; i < n; i++){
                if(arr[i] == 0){
                    for(int j = i+1; j < n; j++){
                        if(arr[j] != 0){
                            swap(arr[i], arr[j]);
                        }
                    }
                }
            }
            for(int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }

        // Method 2:
        // TC: O(n)
        // SC: O(1)
        void move_zeroes2(int arr[], int n){
            vector<int>res;
            int count = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] != 0){
                    res.push_back(arr[i]);
                }
                else{
                    count++;
                }
            }

            while(count){
                res.push_back(0);
                count--;
            }
            for(auto x: res) cout << x << " ";
            cout << endl;
        }

        // Method 3: Most Efficient , Inplace
        // TC: O(n)
        // SC: O(1)
        void move_zeroes3(int arr[], int n){
            int count = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] != 0){
                    swap(arr[i], arr[count]);
                    count++;
                }
            }
            for(int i = 0; i < n; i++) 
                cout << arr[i] << " ";
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
    s.move_zeroes1(arr, n);
    s.move_zeroes2(arr, n);
    s.move_zeroes3(arr, n);
    return 0;
}