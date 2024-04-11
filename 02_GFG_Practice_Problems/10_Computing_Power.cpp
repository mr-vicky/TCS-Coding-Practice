#include <iostream>
using namespace std;

class Solution{
    public: 
        // Method 1: Naive
        // TC: O(x*m)
        // SC: O(1)
        int power(int x, int n){
            int res = 1;
            for(int i = 0; i < n; i++){
                res *= x;
            }
            return res;
        }

        // Method 2: Efficient 
        // TC: O(log(n))
        // SC: O(log(n))
        int power2(int x, int n){
            if(n == 0) return 1;
            if(n % 2 == 0){
                return power2(x, n/2)*power2(x, n/2);
            }
            else{
                return power2(x, n-1) * x;
            }
        }
};

int main(){
    int x, n;
    cin >> x >> n;
    Solution s;
    cout << s.power(x, n) << endl;
    cout << s.power2(x, n) << endl;
    return 0;
}