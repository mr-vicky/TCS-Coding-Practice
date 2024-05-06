#include <iostream>
using namespace std;

unsigned int count_set_bits(int x){
    unsigned int count = 0;
    while(x != 0){
        if((x % 2) == 1){
            count++;
        }
        x = x/2;
    }
    return count;
}

int main(){
    int x = 4;
    cout << count_set_bits(x);
    return 0;
}