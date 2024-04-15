#include <iostream>
using namespace std;

class Solution{
    public: 
        // Naive Method
        // TC: O(n^2)
        // SC: O(1)
        int get_max_consecutive_ones1(int arr[], int n){
            int res = 0;
            for(int i = 0; i < n; i++){
                int count = 0;
                for(int j = i; j < n; j++){
                    if(arr[j] == 1)
                        count++;
                    else break;
                }
                res = max(res, count);
            }
            return res;
        }

        // Efficient Method
        // TC: O(n)
        // SC: O(1)
        int get_max_consecutive_ones2(int arr[], int n){
            int res = 0;
            int count = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] == 0){
                    count = 0;
                }else{
                    count++;
                    res = max(res, count);
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
    cout << s.get_max_consecutive_ones1(arr, n) << endl;
    cout << s.get_max_consecutive_ones2(arr, n) << endl;
    return 0;
}