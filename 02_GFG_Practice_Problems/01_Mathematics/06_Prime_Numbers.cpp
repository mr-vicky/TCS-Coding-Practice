#include<iostream>
#include<cmath>
using namespace std;

class Solution{
	public: 
		bool is_prime(int n){
			if(n == 1) return false;
			if(n == 2) return true;
			for(int i = 2; i*i <= n; i++){
				if(n % i == 0){				
					return false;	
				}
			}
			return true;
		}
		
};

int main(){

	int n;
	cin >> n;
	Solution s;
	cout << boolalpha << s.is_prime(n) << endl;
	return 0;
}