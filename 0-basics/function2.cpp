#include <bits/stdc++.h>
using namespace std;

// Pass by value
// Pass by reference


// Pass by value
int calcu(int num){
    num += 5;
    cout << num << endl;

    num += 5;
    cout << num << endl;

    num += 5;
    cout << num << endl;

    return num;
}

// Pass by reference
int calculation(int &num1){ //--> By adding & , the address is went here in fucntion
    num1 += 5;
    cout << num1 << endl;

    num1 += 5;
    cout << num1 << endl;

    num1 += 5;
    cout << num1 << endl;

    return num1;
}

int main(){
    // int num;
    // cin >> num;

    // calcu(num);  // --> pass by value, only copy of num is passed
    // cout << num; // --> Original value is still same

    int num1;
    cin >> num1; 
    
    calculation(num1);
    cout << num1;

    return 0;
}
