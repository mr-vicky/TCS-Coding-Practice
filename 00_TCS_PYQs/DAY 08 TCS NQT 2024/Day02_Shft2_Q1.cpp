/*
Question 1:

Sum of starting 10 multiples of given number

Input: 10
Output: 550
Explanation: 10*1+10*2+10*3+10*4 and so on upto 10*10
*/ 
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= 10; i++){
        sum += n * i;
    }
    cout << sum << endl;
    return 0;
}