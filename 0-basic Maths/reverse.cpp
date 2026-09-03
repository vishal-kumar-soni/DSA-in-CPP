#include <bits/stdc++.h>
using namespace std;

int reverseNum(int a){
    int lastdigit = 0;
    int reverse = 0;
    while (a != 0){
        lastdigit = a % 10;
        reverse = reverse * 10 + lastdigit;
        a = a / 10;
    }
    return reverse;
}

int main(){
    cout << reverseNum(7789);
    return 0;
}