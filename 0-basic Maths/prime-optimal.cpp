#include<bits/stdc++.h>
using namespace std;

bool prime(int num){
    if(num<=1) return false;
    for(int i=2;i<=sqrt(num);i++){
       if(num%i==0) return false;
    }
    return true;
}

int main(){
   cout<< prime(2);

    return 0;
}

// TC = O(sqrt(n))
// SC = O(1)