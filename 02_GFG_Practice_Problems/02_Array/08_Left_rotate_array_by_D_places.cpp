#include <iostream>
using namespace std;

class Solution{
    public: 
        // Method 1 ->
        // TC: O(n)
        // SC: O(1)
        void left_rotate_by_D_places1(int arr[], int n, int d){
            if(d >= n){
                d = d % n;
            }
            int temp[n]; 
            for(int i = 0; i < d; i++){
                temp[i] = arr[i];
            }

            for(int i = d; i < n; i++){
                arr[i-d] = arr[i];
            }
            for(int i = 0; i < d; i++){
                arr[n-d+i] = temp[i];
            }
            for(int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }   

        // Method 2:
        // TC: O(n)
        // SC: O(1)
        void reverse(int arr[], int low, int high){
            while(low < high){
                swap(arr[low], arr[high]);
                low++;
                high--;
            }
        }

        void left_rotate_by_D_places2(int arr[], int n, int d){
            reverse(arr, 0, d-1);
            reverse(arr, d, n-1);
            reverse(arr, 0, n-1);

            for(int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }
};

int main(){
    int n, d;
    cin >> n >> d;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    
    Solution s;
    // s.left_rotate_by_D_places1(arr, n, d);
    s.left_rotate_by_D_places2(arr, n, d);
    return 0;
}