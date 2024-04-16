#include <iostream>
using namespace std;
// Problem: Find the Maximum sum of K consecutive Elements.

// Sliding Window Technique
class Solution{
    public:

        int max_sum_of_k_consecutive_elements(int arr[], int n, int k){
            int curr = 0;
            int i = 0;
            int j = k;

            for(int i = 0; i < k; i++){
                curr += arr[i];
            }
            int max_sum = curr;

            while(j < n){
                curr -= arr[i++];
                curr += arr[j++];
                max_sum = max(curr, max_sum);
            }   
            return max_sum;
        }
};

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n]; 
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Solution s;
    cout << s.max_sum_of_k_consecutive_elements(arr, n, k) << endl;
    return 0;
}