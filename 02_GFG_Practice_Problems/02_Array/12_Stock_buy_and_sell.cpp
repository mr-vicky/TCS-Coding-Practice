#include<iostream>
using namespace std;

class Solution{
    public: 
        int stock_buy_and_sell(int arr[], int n){
            int profit = 0;
            for(int i = 1; i < n; i++){
                if(arr[i] > arr[i-1]){
                    profit = profit + (arr[i] - arr[i-1]);
                }
            }
            return profit;
        }
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    Solution s;
    cout << s.stock_buy_and_sell(arr, n); 
    return 0;
}