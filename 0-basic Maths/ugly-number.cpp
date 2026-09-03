#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    if (x <= 1)
        return false;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0)
            return false;
    }
    return true;
}

bool isUgly(int n){
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if (isPrime( i)){
                if (i != 2 && i != 3 && i != 5) return false;
            }
            if(n/i!=i){
                if (isPrime(n/i)){
                    if (n/i != 2 && n/i != 3 && n/i != 5) return false;
                }
            }
        }
    }
    return true;
}
int main(){
    cout<<isUgly(1000);
    return 0;
}