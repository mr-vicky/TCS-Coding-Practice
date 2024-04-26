/*
Question 1:

Given Two binary numbers (in 0 and 1 ) in the form of string. Find out whether there is a possibility whether these numbers can become equal by rearranging their respective Os and 1s.
For ex: 101 and 011 can be arranged within themselves to become either 101 or 011.

Example 1:
3 -> length of input string
101 -> input string 1
011 -> input string 2

Output 1:
Yes\

TCS NQT 18 Aug 2022
*/ 
#include <iostream>
using namespace std;

bool can_be_equal(string s1, string s2){
    int count1 = 0;
    if(s1.length() != s2.length()) 
        return false;

    for(int i = 0; i < s1.length(); i++){
        if(s1[i] == '0')
            count1++;
    }   

    int count2 = 0;
    for(int i = 0; i < s2.length(); i++){
        if(s2[i] == '0')
            count2++;
    }
    return count1 == count2;
}

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    cout << boolalpha << can_be_equal(s1, s2);

    return 0;
}