// Link -> https://www.geeksforgeeks.org/c-program-to-check-whether-a-number-is-prime-or-not/

#include <iostream>
using namespace std;

class Solution{
    public: 
        bool isPrime(int n){
            // Edge case : Prime numbers cannot be negative
            if(n <= 1){
                return false;
            }
            for(int i = 2; i * i <= n; i++){
                if(n % i == 0){
                    return false;
                }
            }
            return true;
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    cout << boolalpha << s.isPrime(n);
    return 0;
}