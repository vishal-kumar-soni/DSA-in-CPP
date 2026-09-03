#include<bits/stdc++.h>
using namespace std;

void print(int cnt,int n){
    if(cnt<1) return;
    cout<<cnt<<" ";
    print(cnt-1, n);
}

int main(){
    int n=6;
    print(n, n);
    return 0;
}