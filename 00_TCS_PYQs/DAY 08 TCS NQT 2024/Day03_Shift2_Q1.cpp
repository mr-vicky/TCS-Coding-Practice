#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int>nums;
	for(int i = 0; i < n; i++){
		int temp;
		cin >> temp;
		nums.push_back(temp);
	}
		
	int curr_sum = 0;
	int total_sum = 0;

	for(int i = 1; i <= n; i++){
		total_sum += i;	
	}

	for(int i = 0; i < n; i++){
		curr_sum += nums[i];
	}

	cout << total_sum - curr_sum << endl;
	return 0;
}