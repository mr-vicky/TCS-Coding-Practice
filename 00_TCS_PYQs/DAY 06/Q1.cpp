/*
Question 1:

A coding competition was conducted in company with e employees. Data of employees who participated and who did not participate in the competition is available. There were three problems in the coding competition. Data as mentioned below is available The number of employees who have solved only the first, only the second and only the third problem are equal.

p1 employees who solved the first ,second problem.
p2 employees who solved the second , third problem.
p3 employees who solved the third first problem.
q employees who solved all the 3 problems.
r employees who did not participate in competition.

Answer the following questions based on data.

How many employees have solved the first problem?
How many employees have solved exactly one of the 3 problems?

Refer this Image - https://i.imgur.com/tEKYtqN.png
*/ 
#include <iostream>
using namespace std;

int is_res(string str, int n){
    int res = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            if(i == j){
                res++;
            }
        }
    return res;
}

int main(){
    int n;
    cin >> n;
    string str;
    cin >> str;

    is_res(str, n);
    return 0;
}