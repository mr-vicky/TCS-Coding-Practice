#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        int linear_search(vector<int>nums, int key){
            for(int i = 0; i < nums.size(); i++)
                if(nums[i] == key)
                    return i;
            return -1;
        }
};

int main(){
    vector<int>nums{2, 3, 1, 4, 6, 9, 11, 24, 25, 0, 66, 89};
    int key = 11;
    
    Solution s;
    cout << s.linear_search(nums, key);
    return 0;
}