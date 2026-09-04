#include <bits/stdc++.h>
using namespace std;

// Void
// void parameterized 
// return
// parametarized
// non-parameterized


void voidFunction(){ //Void, non-parameterized
    cout<<"The Void Function"<<endl;
}

void print(int x){ //void parameterized 
    cout << "The number is " << x << "\n"; 
};

int sum(int x, int y){ //return, parametarized
    return x + y;
}

int main(){
    voidFunction();
    print(23);
    cout<<"Sum is "<<  sum(2,3);
    return 0;
}
