#include<iostream>
using namespace std;

class Solution{
    public:
        bool is_prime(int n){
            if(n == 1) return false;
            if(n == 2) return true;
            for(int i = 2; i <= n/2; i++){
                if(n % i == 0){
                    return false;
                }
            }
            return true;
        }

        void get_prime_factors(int n){
            for(int i = 2; i < n; i++){
                if(is_prime(i)){
                    int x = i;
                    while(n % x == 0){
                        cout << i << " ";
                        x = x * i;
                    }
                }
            }
        }
};

int main(){
    int n;
    cin >> n;
    Solution s;
    s.get_prime_factors(n);
    return 0;
}