#include<iostream>
#include<vector>
using namespace std;

class Solution{

	public:
		// Method 1: Recursive Solution
		int fibonacci_number(int n){
			if(n <= 1){ 
				return n;
			}
			return fibonacci_number(n - 1) + fibonacci_number(n-2);	
		}
};

int main(){
	int n;
	cin >> n;
	Solution s;
	cout << s.fibonacci_number(n);
	return 0;
}