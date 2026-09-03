#include<bits/stdc++.h>
using namespace std;

void print(int cnt, int n){
    if(cnt<1) return;
    print(cnt-1, n);
    cout<< cnt << " ";
}

int main(){
    print(3,3);
    return 0;
}
