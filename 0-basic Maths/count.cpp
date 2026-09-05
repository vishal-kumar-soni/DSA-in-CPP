// Given a positive integer n, count the number of digits in n that divide n evenly
//  (i.e., without leaving a remainder). Return the total number of such digits.

#include<bits/stdc++.h>
using namespace std;

int countDigits(int n){
    int original = n;
    int count = 0;
    int lastdigit =0;
    while(n>0){
        lastdigit = n%10;
        if(lastdigit !=0 && original%lastdigit==0) count++;
        n=n/10;
    }
    return count;
}
int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    cout<<countDigits(n);
    return 0;
}