#include<bits/stdc++.h>
using namespace std;

int findHCF(int a , int b){
    for (int i = min(a,b); i >= 1; i--){ //TC - O(min(a,b))
        if(a%i==0 && b%i==0){
            return i;
        }
    }
}

int main(){
    cout<< findHCF(36,24);
    return 0;
}