#include <iostream>
#include <map>
using namespace std;

class Solution{
    public:
        // TC: O(n)
        // SC: O(n)
        int remove_duplicates(int arr[], int n){
            int temp[n];
            temp[0] = arr[0];
            int res = 1;

            for(int i = 1; i < n; i++){
                if(temp[res-1] != arr[i]){
                    temp[res] = arr[i];
                    res++;
                }
            }
            for(int i = 0; i < n; i++){
                arr[i] = temp[i];
            }
            return res;
        }
};

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) 
        cin >> arr[i];

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    Solution s;
    int res = s.remove_duplicates(arr, n);
    n = res;
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}