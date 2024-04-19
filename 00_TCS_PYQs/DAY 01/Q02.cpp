/*
Question 2:

A chocolate factory is packing chocolates into packets. The chocolate packets here represent an array of N number of integer values. The Task is to find the empty packets(0) of chocolate and push it to end of the conveyer belt. 

Input 1: N = 8, arr = [4 , 5, 0, 1, 9, 0, 5, 0 ] 
Output 1 : [4 5 1 9 5 0 0 0]

Input 2: N = 6, arr = [0,0,1,2,4,5]
Output 2: [1,2,4,5,0,0]
*/ 
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public: 
        // Naive Method -> 
        // TC: O(n)
        // SC: O(n)
        void move_empty_packets1(int arr[], int n){
            vector<int>res;
            int count_zeroes = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] == 0)
                    count_zeroes++;
                else
                   res.push_back(arr[i]); 
            }

            for(int i = 0; i < count_zeroes; i++)
                res.push_back(0);

            for(int i = 0; i < n; i++)
                arr[i] = res[i];
        }


        // Efficient Method -> 
        // TC: O(n)
        // SC: O(1)
        void move_empty_packets2(int arr[], int n){
            int count = 0;
            for(int i = 0; i < n; i++){
                if(arr[i] != 0){
                    int temp = arr[i];
                    arr[i] = arr[count];
                    arr[count] = temp;
                    count++;
                }
            }
        }


};



int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    Solution s;
    s.move_empty_packets2(arr, n);

    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}