#include <iostream>
#include <cmath>
using namespace std;

bool is_set(int n, int k){
    int temp = pow(2, k-1);
    return (n & temp);
}

int main(){
    int n = 5, k = 1;
    cout << boolalpha << is_set(n, k);
}
