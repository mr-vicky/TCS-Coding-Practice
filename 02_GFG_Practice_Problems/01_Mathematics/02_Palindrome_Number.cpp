#include<iostream>
#include<vector>
using namespace std;


// Method 1 : 
// TC: O(n)
// SC: O(n)
bool isPalindrome(int n){
	vector<int>nums;
	while(n > 0){
		int temp = n % 10;
		n /= 10; 
		nums.push_back(temp);
	}

	int i = 0;
	int j = nums.size()-1;

	while(i < j){
		if(nums[i] != nums[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}

// Method 2: Find Reverse of the number
// TC: O(n)
// SC: O(1)

bool isPalindrome1(int n){
	int temp = n;
	int m = 0;
	while(temp > 0){
		m = m*10 + (temp % 10);
		temp /= 10;
	}

	if(m == n){
		return true;
	}
	return false;
}

int main(){
	int n;
	cin >> n;
	
	cout << boolalpha << isPalindrome(n) << endl;
	cout << boolalpha << isPalindrome1(n) << endl;

	return 0;
}