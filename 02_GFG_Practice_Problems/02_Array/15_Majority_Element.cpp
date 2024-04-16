#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

class Solution{
    public:
        // TC: O(n*log(n))
        // SC: O(1)
        int get_majority_element1(int arr[], int n){
            sort(arr, arr+n);   
            return arr[(n/2)+1];
        }

        // TC: O(n)
        // SC: O(n)
        int get_majority_element2(int arr[], int n){
            map<int, int>freq;
            for(int i = 0; i < n; i++){
                freq[arr[i]]++;
            }
            for(int i = 0; i < n; i++){
                if(freq[arr[i]] > n/2){
                    return arr[i];
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
    cout << s.get_majority_element1(arr, n) << endl;
    cout << s.get_majority_element2(arr, n) << endl;
    return 0;
}