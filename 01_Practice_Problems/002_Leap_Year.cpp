// Link -> https://www.geeksforgeeks.org/program-check-given-year-leap-year/

#include<iostream>
using namespace std;

// Any year can be a Leap year if its satisfying all the following comditions:
// 1. it must is divisible by 400, 
// 2. it must be divisible by 4 but not divisible by 100

class Solution{
    public:
        bool isLeap(int year){
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ){
                return true;
            }
            else{
                return false;
            }
        }
};

int main(){
    int year;
    cin >> year;

    Solution s;
    cout << boolalpha << s.isLeap(year);
    return 0;
}