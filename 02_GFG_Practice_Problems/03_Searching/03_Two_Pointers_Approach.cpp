#include <iostream>
#include <vector>
using namespace std;

// Note: for the use of 2 pointers approach array must be sorted.
class Solution{
    public: 
        bool find_pair(vector<int>nums, int sum){
            int i = 0;
            int j = nums.size()-1;

            while(i < j){
                if(nums[i] + nums[j] == sum){
                    return true;
                }
                else if(nums[i] + nums[j] < sum){
                    i++;
                }
                else{
                    j--;
                }
            }
            return false;
        }
};

int main(){
    int n, sum;
    cin >> n >> sum;
    vector<int>nums(0, n);
    for(int i = 0; i < n; i++){
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }

    Solution s;
    cout << boolalpha << s.find_pair(nums, sum);
    return 0;
}   