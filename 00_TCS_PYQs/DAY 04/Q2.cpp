/*
Day 4: (TCS NQT Coding Question Day 2 Slot 1 – Question 2)
Question 2:
A supermarket maintains a pricing format for all its products. A value N is printed on each product. When the scanner reads the value N on the item, the product of all the digits in the value N is the price of the item. The task here is to design the software such that given the code of any item N the product (multiplication) of all the digits of value should be computed(price).

Example 1:

Input :

5244 -> Value of N

Output :
160 -> Price 

Explanation:

From the input above 

Product of the digits 5,2,4,4

5*2*4*4= 160

Hence, output is 160.
*/ 
#include <iostream>
using namespace std;

int get_price(int n){
    int res = 1;
    while(n > 0){
        res *= (n%10);
        n /= 10;
    }
    return res;
}

int main(){
    int n;
    cin >> n;
    cout << get_price(n);
    return 0;
}