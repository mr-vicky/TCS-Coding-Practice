#include <iostream>
using namespace std;

class Solution{
    public: 
        void get_leaders(int arr[], int n){
            int j = 0;
            int last_leader = arr[n-1];
            cout << last_leader << " ";

            for(int i = n-2; i >= 0; i--){ 
                if(arr[i] > last_leader){
                    last_leader = arr[i];
                    cout << arr[i] << " ";
                }
            }
            
        }
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    Solution s;
    s.get_leaders(arr, n);
    return 0;
}