#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        int get_square_root1(int n);
        int get_square_root2(int n);
};

// Solution 1: 
// TC: O(square_root(n))
// SC: O(1)
int Solution::get_square_root1(int n){
    int i = 1;
    while(i*i <= n){
        i++;
    }
    return (i-1);
}

int main(){
    int n;
    cin >> n;

    Solution s;
    cout << s.get_square_root1(n) << endl;
    return 0;
}