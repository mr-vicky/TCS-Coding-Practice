#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public: 
        void replace(int arr[], int n){
            vector<int>nums;
            for(int i = 0; i < n; i++){
                nums.push_back(arr[i]);
            }
            sort(nums.begin(), nums.end());
               
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
    return 0;
}