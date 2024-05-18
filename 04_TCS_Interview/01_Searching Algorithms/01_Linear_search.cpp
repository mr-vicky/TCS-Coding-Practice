#include <iostream>
#include <vector>
using namespace std;

// TC : O(n)
// SC: O(1)
// Best case TC: O(1), key is present at the first index.
// Average case TC: O(n), 
// Worst case TC: O(n), key is present at the last index.

int linear_search(vector<int>nums, int key){
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == key)
            return i;
    }
    return -1;
}

int main(){
    vector<int>nums{2, 3, 8, 1, 8, 9, 43, 88, 99, 40};

    int key = 400;
    cout << linear_search(nums, key);
    return 0;
}