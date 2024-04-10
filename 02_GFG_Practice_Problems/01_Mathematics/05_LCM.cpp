# include <iostream>
# include <cmath>
using namespace std;

// Method 1: Naive 
// TC: O(a*b)
// SC: O(1)
int get_LCM(int a, int b){
    int res = max(a, b);
    while(true){
        if((res % a == 0) && (res % b == 0))
            return res;
        res++;
    }
}

int main(){
	int a, b;
	cin >> a >> b;

	cout << get_LCM(a, b) << endl;
	return 0;
}