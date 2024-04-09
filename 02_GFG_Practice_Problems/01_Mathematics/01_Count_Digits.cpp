#include<iostream>
using namespace std;

int count_Digits(int n){
	int count = 0;
	while(n > 0){
		count++;
		n /= 10;
	}
	return count;
}

int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		cout << count_Digits(n) << endl;
	}
	return 0;
}