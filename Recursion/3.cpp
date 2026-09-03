// print from n to 1
#include<bits/stdc++.h>
using namespace std;

void print(int cnt,int n){
    if(cnt>=n) return;
    cout<<n-cnt<<" ";
    print(cnt+1,n);
}

int main(){
    int cnt=0;
    int n=6;
    print(cnt, n);
    return 0;
}