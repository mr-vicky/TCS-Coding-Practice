/*
Question 1:

Vijay, an industrialist recently opened a fuel industry . There are N numbers of different category of fuels and each fuel is stored in a fixed size container. Size of each container can vary from fuel to fuel .

Hari, a fuel merchant, Visited Vijay's Industry and he wanted to purchase fuels for his shop. Hari has a limited amount of money (K) and wants to buy fuel. Hari will not buy more than one container of any fuel category. Hari wants to maximize the overall volume i.e sum of volume of fuels he buys. Your task is to get the maximum overall volume of fuels which Hari can purchase

Given the number of categories of fuels (N) money units (k) price of container of each category of fuel and volume contained in container for each category,

NOTE Quantity (volume) of container will be given in the same order as of the price.

Example 1:
Input :
5
105
10 10 40 50 90 -> prices
10 20 20 50 150 -> container
Output :
170

Example 2:
Input :  
5
100
10 20 30 40 100
10 20 30 40 100
Output:
100
*/ 
#include <iostream>
#include <vector>
using namespace std;

int get_max_volume(vector<vector<int>>prices, int money){
    int n = prices[0].size();
    // for(int i = 0; i < 2; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << prices[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int total_cost = 0;
    int volume = 0;
    for(int i = 0; i < n; i++){
        for(int j = n-1; j >= 0; j--){
            if(total_cost <= money){
                total_cost -= prices[0][j];
                volume += prices[1][j];
            }
        }
    }
    return volume;
}

int main(){ 
    int n, money;
    cin >> n >> money;
    vector<vector<int>>prices;
    for(int i = 0; i < 2; i++){
        vector<int>temp;
        for(int j = 0; j < n; j++){
            int value = 0;
            cin >> value;
            temp.push_back(value);
        }
        prices.push_back(temp);
    }
    cout << get_max_volume(prices, money);
    return 0;
}