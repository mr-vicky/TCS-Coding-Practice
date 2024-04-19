#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution{
    public:
        int max_subarray_product(vector<int>nums){
            int n = nums.size();
            int res = 1;
            for(int i = 0; i < n; i++){
                int curr = 1;
                for(int j = 0; i < n; i++){
                    curr = curr * nums[i];
                    res = max(res, curr);
                }
            }
            return res;
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
    cout << s.max_subarray_product(nums) << endl;
    return 0;
}   