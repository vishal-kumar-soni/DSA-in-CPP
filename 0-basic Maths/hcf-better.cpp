#include<bits/stdc++.h>
using namespace std;

int findHCF(int a , int b){
    int ans=1;
    for (int i = 1; i <= min(a,b); i++){ //TC - O(min(a,b))
        if(a%i==0 && b%i==0){
            ans=max(ans,i);
        }
    }
    return ans;
}

int main(){
    cout<< findHCF(36,24);
    return 0;
}