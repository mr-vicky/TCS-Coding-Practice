/*
Question 2:

Alice and friends are playing game kho kho . Alice is actually a mediator and rest of the friends are seated on N chairs one each. Alice starts by providing a paper with single digit number to the friend that is present on number 1.

Lets denote friends by F, where F will be of size N. F[1] ..... F[N] represents friends seated respectively .
After receiving paper with a digit. F[1] will enact and try to tell F[2] without speaking. Similarly F[2] will communicate to next person F[3].

This continues until the last person F[n] understands the digit. Finally the last person will write the digit on separate page and give to alice. Alice will compare both the digits . If digits are same then alice will give t shirt to each friend.

However if the digits do not match he will ask digits from each friend and give t shirt to that friend who understood the correct digit.s

Find how many friends did not understand the correct digit.

Example 1:
Input:
3
4,4,4
Output : 0

Example 2:
Input:
5
1,2,3,2,2
Output : 4

TCS NQT 19 Aug 2022
*/ 

#include <iostream>
using namespace std;

int get_res(int arr[], int n){
    int temp = arr[0];
    int count = 1;
    for(int i = 1; i < n; i++){
        if(temp == arr[i]){
            count++;
        }
    }
    return n - count;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    cout << get_res(arr, n);
    
    return 0;
}