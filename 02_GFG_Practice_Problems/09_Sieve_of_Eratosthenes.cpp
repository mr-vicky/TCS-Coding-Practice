// Sieve of Eratosthenes : Find all the prime numbers less than n

#include<iostream>
using namespace std;

class Solution{
    public: 
        bool is_prime(int n){
            if(n == 1) return false;
            if(n == 2) return true;
            for(int i = 2; i*i <= n; i++){
                if(n % i == 0){
                    return false;
                }
            }
            return true;
        }

        void fun(int n){    
            for(int i = 2; i <= n; i++){
                if(is_prime(i)){
                    cout << i << " ";
                }
            }
        }
};  

int main(){
    int n;
    cin >> n;
    Solution s;
    s.fun(n);

    return 0;
}