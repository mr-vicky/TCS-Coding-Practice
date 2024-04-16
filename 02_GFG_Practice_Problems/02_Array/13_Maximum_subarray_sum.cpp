#include <iostream>
using namespace std;

class Solution{
    public:
        // TC: O(n)
        // SC: O(1)
        int get_maximum_subarray_sum(int arr[], int n){
            int res = arr[0];
            for(int i = 0; i < n; i++){
                int sum = 0;
                for(int j = i; j < n; j++){
                    sum += arr[j];
                    res = max(res, sum);
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
    
    cout << s.get_maximum_subarray_sum(arr, n) << endl;
    return 0;
}