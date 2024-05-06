#include <iostream>
#include <vector>
#include <typeinfo>
#include <iomanip>
using namespace std;
int main() {
    // Method 1: Input method if array size is not given ---------------->
    //Input: 1, 2, 3, 4, 6, 7

    /*
    vector<int>nums;
    int n;
    while(cin >> n){
        nums.push_back(n);
    }

    cout << endl;
    for(auto x: nums) cout << x << " ";
    cout << endl;
    */ 


    // Method 2: for string that contains white spaces ---------------->
    // Input: "This is the input"

    /*
    string s;
    getline(cin, s);

    cout << s << " ";
    */ 


    // Method 3: if one string and another double value is given by space seperated ---------------->
    // Input: "Mango" 143
    /*
    string s;
    double d;
    cin >> s >> d;

    cout << s << " " << d;
    */ 

    // Method 4: Sepearating string and double input ---------------------> 
    // Input: "Mango,19.048"

    /*
    string s;
    cin >> s;

    int index = 0;
    while(s[index] != ','){
        index++;
    }

    string str = s.substr(0, index);
    double num = stod(s.substr(index + 1, s.size() - index + 1));

    cout << str << " " << typeid(str).name() << endl;
    cout << num << " " << typeid(num).name() << endl;
    */ 

    // Method 5: Mixed input -------------------------------> 
    /*
    input: 
            PQRS 10.999 123
            ABCD 12.888 322
            EFGH 14.777 988
    */ 

    /*
    
    string s;
    double d;
    int i;
    vector<string>name;
    vector<double>price;
    vector<int>count;

    while(cin >> s){
        name.push_back(s);
        cin >> d;
        price.push_back(d);
        cin >> i;
        count.push_back(i);
    }

    for(int i = 0; i < name.size(); i++){
        cout << name[i] << " " << price[i] << " " << count[i] << endl;
    }
    */


    // Setting the Precesion ---------->
    
    double pi = 3.14159265359;
    // Method 1: using setprecision() method
    cout << fixed << setprecision(2) << pi << endl;

    // Method 2: multiplying and dividing by 10, 100, 10000,....
    int x = pi * 100;
    double val = x/100.00;
    cout << val << endl;
    return 0;
}
