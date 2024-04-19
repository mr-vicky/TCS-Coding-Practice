#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
    public:
        // TC: O(n*log(n))
        // SC: O(1)
        void rearrange(vector<int>&nums){
            int n = nums.size();
            vector<int>res;
            sort(nums.begin(), nums.end()); 
            for(int i = 0; i <= n/2; i++){
                res.push_back(nums[i]);
            }

            for(int i = n-1; i > n/2; i--){
                res.push_back(nums[i]);
            }

            for(int i = 0; i < n; i++){
                cout << res[i] << " ";
            }
            cout << endl;
        }
};

int main(){
    int n;
    cin >> n;
    vector<int>nums;
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    Solution s;
    s.rearrange(nums);
    return 0;
}
