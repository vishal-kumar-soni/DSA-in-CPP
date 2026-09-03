// Print " " n times
#include<bits/stdc++.h>
using namespace std;

void print(int cnt, int n){
    if(cnt>=n) return ;
    cout<<cnt<< " Python Snake"<<endl;
    print(cnt+1 , n);
}

int main(){
    int cnt=0;
    int n=5;
    print(cnt, n); //TC O(n)
    return 0;
}
