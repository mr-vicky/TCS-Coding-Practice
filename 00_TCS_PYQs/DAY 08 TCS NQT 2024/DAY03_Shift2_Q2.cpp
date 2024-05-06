#include<iostream>
#include<vector>
using namespace std;

bool is_prime(int n){
	for(int i = 2; i * i <= n; i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int n;
	cin >> n;

	vector<int>primes;
	for(int i = 2; i <= n; i++){
		if(is_prime(i)){
			primes.push_back(i);
		}
	}

	for(int i = 0; i < primes.size(); i++){
		cout << primes[i] << " ";
	}
    cout << endl << primes.size() << endl;
	return 0;
}

