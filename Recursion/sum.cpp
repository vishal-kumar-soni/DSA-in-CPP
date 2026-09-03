#include<bits/stdc++.h>
using namespace std;

int print(int ans, int n){
   if(n<1) return ans;
   ans=ans+n;
   return print(ans,n-1);
}

int main(){
    int n=4;
    int ans=0;
    cout<< print(ans,n);
    return 0;
}
