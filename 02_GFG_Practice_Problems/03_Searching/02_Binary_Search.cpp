#include <iostream>
#include <vector>
using namespace std;

// Binary Search: 
// Note: for ninary seatch Array must be sorted.
class Solution
{
public:
    int binary_search(vector<int> nums, int key)
    {
        int low = 0;
        int high = nums.size() - 1;

        while (low <= high)
        {
            int mid = (low + high) / 2;

            if (nums[mid] == key)
            {
                return mid;
            }
            else if (nums[mid] < key)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return -1;
    }
};

int main()
{
    vector<int> nums{1, 2, 5, 6, 8, 9, 11, 14, 225, 999};
    int key = 11;

    Solution s;
    cout << s.binary_search(nums, 999) << endl;
    return 0;
}