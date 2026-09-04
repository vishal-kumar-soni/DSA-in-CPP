#include <bits/stdc++.h>
using namespace std;
int main(){
    int a = 12; // Used to store whole numbers, both positive and negative. -> 4 Bytes
    short age = 20; // Used for integers when you need a smaller integer type. -> 2 Bytes
    long b = 1000000; // Used for larger integer values. -> 4 Bytes
    long long c = 8000000000LL ; // Used for very large whole numbers. -> 8 Bytes

    float x = 99.50f; // Used to store decimal/floating-point numbers.  -> 4 Bytes
    double pi = 3.141592653589793; // double is also used for decimal no. but provides more precision than float. -> 8 Bytes
    long double pii = 3.141592653589793238L; // more precision. -> 16 Bytes

    string str1 = "Heyy i am here";
    string str2;
    getline(cin, str2);
    cout << str2<< endl;

    char ch; // Used to store a single character. -> 1 Bytes
    cin >> ch;
    cout << ch << endl;

    bool isLoggedIn = true; // Used to represent true/false values. -> 1 bytes
    bool isAdmin = false; 

    return 0;
}