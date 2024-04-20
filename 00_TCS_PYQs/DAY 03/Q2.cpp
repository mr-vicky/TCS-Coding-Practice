/*
Day - 3
Question 2:(TCS NQT Coding Question Day 1 Slot 2 – Question 1)

Jack is always excited about sunday. It is favourite day, when he gets to play all day. And goes to cycling with his friends. 

So every time when the months starts he counts the number of sundays he will get to enjoy. Considering the month can start with any day, be it Sunday, Monday…. Or so on.

Count the number of Sunday jack will get within n number of days.

 Example 1:

Input 

mon-> input String denoting the start of the month.

13  -> input integer denoting the number of days from the start of the month.

Output :

2    -> number of days within 13 days.

Explanation:

The month start with mon(Monday). So the upcoming sunday will arrive in next 6 days. And then next Sunday in next 7 days and so on.

Now total number of days are 13. It means 6 days to first sunday and then remaining 7 days will end up in another sunday. Total 2 sundays may fall within 13 days.
*/ 
#include <iostream>
using namespace std;

int get_no_of_sundays(string day, int n){  
    int count = 0;     
        if(day == "mon" && n > 0){
            n -= 1;
            count++;
            
        }else if(day == "tue" && n > 0){
            n -= 2;
            count++;
        }else if(day == "wed" && n > 0){
            n -= 3;
            count++;
        }else if(day == "thu" && n > 0){
            n -= 4;
            count++;
        }else if(day == "fri" && n > 0){
            n -= 5;
            count++;
        }else if(day == "sat" && n > 0){
            n -= 6;
            count++;
        }else if(day == "sun" && n >= 1){
            n -= 0;
            count++;
        }
    while(n >= 7){
        n /= 7;
        count++;
    }
    return count;
}

int main(){
    string day;
    cin >> day;
    int n;
    cin >> n;

    cout << get_no_of_sundays(day, n);
    return 0;
}