#include <iostream>
using namespace std;

class Solution{
    public: 
        // Kadanes Algorithm -> 
        // TC: O(n)
        // SC: O(1)
        int maximum_subarray_sum(int arr[], int n){
            int res = arr[0];
            int sum = 0;
            for(int i = 0; i < n; i++){
                if(sum < 0){
                    sum = 0;
                }
                sum += arr[i];
                if(sum > res){
                    res = sum;
                }
            }
            return res;
        }
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    Solution s;
    cout << s.maximum_subarray_sum(arr, n) << endl;
    return 0;
}