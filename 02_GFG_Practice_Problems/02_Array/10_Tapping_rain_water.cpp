#include <iostream>
using namespace std;

class Solution{
    public: 
        int tapping_rain_water(int arr[], int n){
            int total_water = 0;
            int left = 0;
            int right = 0;
            for(int i = 1; i < n-1; i++){
                for(int j = i-1; j < i; j++){
                    left = max(arr[j], left);
                }

                for(int k = i+1; k < n; k++){
                    right = max(arr[k], right);
                }

                int temp = min(left, right);
                if(temp > arr[i])
                    total_water += temp - arr[i];
            }
            cout << "res: ";
            return total_water;
        }
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0;  i < n; i++)
        cin >> arr[i];

    Solution s;
    cout << s.tapping_rain_water(arr, n);
}
