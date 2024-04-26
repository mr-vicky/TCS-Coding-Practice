/*
Question 3:

Charan is working on the boundary of his House. His boundary is made of N-bamboos, all across the house.

As Charan is a trader, he has colored his boundary in 2 colors Green and Red, which represent Bull and Beer respectively.

This year he is very bullish on the stock market, so he decided to color all the bamboo in green color. Currently, some are green and some are red. The current configuration is represented as a string S, where each index is represented as a color bamboo.

As the number of bamboo is more, he wants to make this task an interesting one. So he decided to play a game.
Below are the rules of the game:
- Consider an integer K Select a particular index say 1, and target the next K bamboos.
- If the bamboo is colored Green, make it RED, and if it is Red, make it Green. doing this until all the turns Green.

You have to find the no. of minutes in which Charan can turn all the bamboo to be green. Considering each operation takes 1 minute to complete.   

Input:
N = 7
K = 3
B = 'RGGRGRG'

Output:
4

Explaination:
AT
Min1 - GRRRGRG
Min2 - GGGGGRG
Min3 - GGGGGGR
Min4 - GGGGGGG - All green here
*/ 
#include <iostream>
using namespace std;

// int function(int )

int main(){
    int n, k;
    cin >> n >> k;
    string b;
    cin >> b;

    return 0;
}