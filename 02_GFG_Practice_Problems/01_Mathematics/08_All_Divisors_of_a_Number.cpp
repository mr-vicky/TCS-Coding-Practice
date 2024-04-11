#include<iostream>
using namespace std;

class Solution{
    public:
        void get_divisors(int n){
            for(int i = 1; i <= n; i++){
                if(n % i == 0){
                    cout << i << " ";
                }
            }
        }
};

int main(){ 
    int n;
    cin >> n;
    Solution s;
    s.get_divisors(n);
    return 0;
}