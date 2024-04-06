// Leetcode ->  https://leetcode.com/problems/climbing-stairs/
#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public: 
        int climbing_stairs(int n){
            vector<int>nums{1, 2, 3};
            if(n <= 3) return n;
            for(int i = 3; i < n; i++){
                nums.push_back(nums[i - 1] + nums[i - 2]);
            }
            return nums[n-1];
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
    for(int i = 0; i < n; i++){
        int temp = arr[i];
        cout << s.climbing_stairs(temp) << endl;
    }
    return 0;
}