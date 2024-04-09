#include<iostream>
using namespace std;

// Method 1: Iterative Method
// TC: O(n)
// SC: O(1)
int get_factorial(int n){
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;	
}

// Method 2: Recursive Method
// TC: O(n)
// SC: O(n)
int get_factorialR(int n){
    if(n == 0){
        return 1;
    }
    return n * get_factorialR(n-1);
}

int main(){
	int n;
	cin >> n;
	cout << get_factorial(n) << endl;
	cout << get_factorialR(n) << endl;
	return 0;	
}