#include<iostream>
using namespace std;

class Solution{
	public: 
		void getFactors(int n){
			for(int i = 1; i <= n; i++){
				if(n % i == 0){
					cout << i << " ";
				}	
			}
		}
};


int main(){
	int n;
	cin >> n;
	
	Solution s;
	s.getFactors(n);
}