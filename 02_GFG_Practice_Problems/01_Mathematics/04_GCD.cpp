#include<iostream>
#include<cmath>
using namespace std;

class Solution{
	public:
		// TC: O(n)
		// SC: O(1) 
		int GCD(int m, int n){
			int small = min(m, n);
			for(int i = small; i >= 1; i--){
				if((m % i == 0) && (n % i == 0)){
					return i;			
				}	
			}	
		}
};

int main(){
	int m, n;
	cin >> m >> n;
	Solution s;
	
	cout << s.GCD(m, n) << endl;
	return 0;
}