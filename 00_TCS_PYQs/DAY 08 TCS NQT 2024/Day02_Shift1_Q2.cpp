/*
Question 2:

List of max elements in contiguous sub-array of given k from main array

Input: 
3,6,7,1,6,3
3
Output:
7 7 7 6
Explanation: Maximum element in contiguous sub-array of size 3
in first subarray of size 3 [3,6,7] max is 7
in next subarray of size 3 [6,7,1] max is 7...
*/ 
#include <iostream>
#include <vector>
using namespace std;

void get_max_elements(vector<int>nums, int k){
    int n = nums.size();
    for(int i = 0; i <= n-k; i++){
        
        int maxi = 0;
        for(int j = i; j < i + k; j++){
            maxi = max(nums[j], maxi);
        }
        cout << maxi << " ";
    }
}

int main(){
    int k;
    cin >> k;

    int val;
    vector<int>nums;
    while(cin >> val){
        nums.push_back(val);
    }
    get_max_elements(nums, k);
    return 0;
}

/*
Input:
3
3 6 7 1 6 3
*/ 