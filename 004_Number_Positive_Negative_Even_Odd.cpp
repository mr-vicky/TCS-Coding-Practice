// https://www.geeksforgeeks.org/program-check-number-positive-negative-odd-even-zero/

# include <iostream>
using namespace std;

class Solution{
    public:
        int n;

        void checkNumber(int n){
            if(n < 0){
                cout << "Negative ";
            }
            else if(n == 0){
                cout << "Zero ";
            }
            else{
                cout << "Positive ";
            }

            if(n % 2 == 0){
                cout << "and Even";
            }
            else{
                cout << "and Odd";
            }
        }
};

int main(){
    Solution s;
    cin >> s.n;

    s.checkNumber(s.n);
    return 0;
}