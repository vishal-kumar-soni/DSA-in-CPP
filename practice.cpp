#include<bits/stdc++.h>
using namespace std;

bool isPrime(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0) return false;
    }
   return true;
}


bool ugly(int a ){ 
    for(int i=2;i<=a;i++){
        if(a%i==0){
            if(isPrime(i) ){
                if(i!=2 && i!=3 && i!=5) {
                    return false;
                }
            }
        }
    }
    return true;
}

int main(){
    int a ;
    cout<<"Enter 1st number: ";
    cin>>a;

    cout<<ugly(a);
    return 0;
}