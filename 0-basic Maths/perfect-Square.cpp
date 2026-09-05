#include<bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int N) {
    if (N < 0) {
      return 0;
    }

    int root = sqrt(N);

    if (root * root == N) return 1;
    else return 0;

}

int main(){
    int n;
    cin>>n;

    cout<<isPerfectSquare(n);
    return 0;
}