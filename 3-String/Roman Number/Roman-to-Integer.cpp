#include <bits/stdc++.h>
using namespace std;

int valueOf(char ch){
    switch (ch){
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    }
}

int RomanToInteger(string str){
    int sum = 0;
    int i = 0;

    while (i < str.size()){
        if (valueOf(str[i]) >= valueOf(str[i + 1])){
            sum += valueOf(str[i]);
        }
        else{
            sum -= valueOf(str[i]);
        }
        i++;
    }
    return sum;
}

int main(){
    string str = "MCCXLVIII";

    cout << RomanToInteger(str);

    return 0;
}