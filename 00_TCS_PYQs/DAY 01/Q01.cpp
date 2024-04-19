/*
Question 1:

The Caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or messages is shifted by a nuber of places down the alphabet.
For example, with a shift of 1, P would be replaced by Q, Q would become R, and so on...
To pass an encrypted message from one person to another, it is first necessary that both the parties have the 'Key' for the cipher, so that the sender may encrypt and the receiver may decrypt it.
Key is the number of OFFSET to shift the cipher alphabet. Key can have basic shifts from 1 to 25 positions as there are 26 alphabets.
As we are designing custom caesar cipher, in addition to alphabets, we are consiidering numeric digits from 0 to 9. Digits can also be shifted by key places.
For example, if a given text contains any digit with value 5 and key = 2, then 5 will be replaced by 7.

Input:
AdfTu34
1
Output:
BegUv45

Input:
yZ89
2
Output:
aB01
*/ 
#include <iostream>
#include <string>
using namespace std;

// TC: O(n)
// SC: O(1)
class Solution{
    public:
        string function(string &s, int key){
            for(int i = 0; i < s.length(); i++){
                if(s[i] >= 65 && s[i] <= 90){
                    if(s[i] + key > 90){
                        int temp = key - 26;
                        s[i] += temp;
                    }
                    else{
                        s[i] += key;
                    }
                }

                if(s[i] >= 97 && s[i] <= 122){
                    if(s[i] + key > 122){
                        int temp = key - 26;
                        s[i] += temp;
                    }
                    else{
                        s[i] += key;
                    }
                }

                if(s[i] >= 48 && s[i] <= 57){
                    if(s[i] + key > 57){
                        int temp = key - 10;
                        s[i] += temp;
                    }
                    else{
                        s[i] += key;
                    }
                }
            }
            return s;
        }
};

int main(){
    string str;
    cin >> str;
    int key;
    cin >> key;

    Solution s;
    cout << s.function(str, key);
    return 0;
}

