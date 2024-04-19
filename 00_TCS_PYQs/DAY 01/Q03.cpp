/*
Question 3:

Consider the following series: 1,1,2,3,4,7,8,15,9,24,16,40,32,72,104,27...
This series is a mixture of 3 series -
    - All the prime position values are power of 2
    - All the perfect square position are power of 3
    - Remaining positions are sum of previous 2 values

for example if N = 15, the 15th term in the series is 104, so only value 104 should be printed to STDOUT.
You can assume that N will not exceed 40.

Input:
15
Output:
104

Input:
9
Output:
9
*/ 

#include <iostream>
#include <cmath>
#include <map>
using namespace std;

// THIS SOLUTION IS INCOMPLETE!!!!!!!!!!!!
bool is_prime_positions(int n){
    if(n == 1) return false;
    for(int i = 2; i*i <= n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int count_primes(int n){
    int count = 0;
    for(int i = 2; i <= n; i++){
        if(is_prime_positions(i))
            count++;
    }
    return count;
}

bool is_perfect_square_position(int n){
    if(n == 1) return true;
    for(int i = 2; i*i <= n; i++){
        if(i*i == n){
            return true;
        }
    }
    return false;
}

int count_perfect_square_positions(int n){
    int count = 0;
    for(int i = 0; i <=n; i++){
        if(is_perfect_square_position(i))
            count++;
    }
    return count;
}

int fibonacci_number(int n){
    if(n <= 1){
        return n;
    }
    return fibonacci_number(n-1) + fibonacci_number(n-2);
}

int get_the_number(int n){
    map<int, int>res;
    res[1] = 1;
    res[2] = 1;

    for(int i = 2; i <= 41; i++){
        if(is_prime_positions(i)){
            
        }
    }

    // if(is_prime_positions(n)){
    //     int power = count_primes(n);
    //     int res = 1;
    //     for(int i = 0; i < power-1; i++){
    //         res *= 2;
    //     }
    //     return res;
    // }
    // else if(is_perfect_square_position(n)){
    //     int count = count_perfect_square_positions(n)-1;
    //     int res = 1;
    //     for(int i = 0; i < count; i++){
    //         res *= 3;
    //     }
    //     return res;
    // }
    // else{
    //     return fibonacci_number(n);
    // }
}


int main(){
    int n;
    cin >> n;

    cout << get_the_number(n);
    return 0;
}