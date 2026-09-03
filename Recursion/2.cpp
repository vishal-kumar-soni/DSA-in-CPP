// Print linearly 1-n 

#include<bits/stdc++.h>
using namespace std;
void print(int cnt, int n){
    if(cnt>n) return;
    cout<<cnt<<" ";
    print(cnt+1, n);
}
int main(){
    int n=6;
    int cnt=1;
    print(cnt, n); //TC=O(n)
    return 0;
}