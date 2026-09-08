// The Euclidean algorithm - It is based on the principle that the HCF of two numbers also divides
//  their difference

#include<bits/stdc++.h>
using namespace std;

int hcf(int a, int b){
    while (a > 0 && b > 0) {
        if (a > b) a = a % b;
        else b = b % a;
    }
    if (a == 0) return b;
    else return a;
}

int main(){
    int a,b;

    cout<<"Enter 1st no.: ";
    cin>>a;
    cout<<"Enter 2nd no.: ";
    cin>>b;

    cout<<hcf(a, b);

    return 0;
}
