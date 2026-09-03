#include <bits/stdc++.h>
using namespace std;
int main(){
    stack<int> stk;

    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);
    stk.push(5);
    stk.emplace(6);

    cout << stk.top() << endl; // 6

    // Three generic functions are there in stack
    // push(), pop(), top() --> all works on O(1) TC

    // Other functions are
    // size(), empty(), swap()
    //  s1.swap(s2);

    return 0;
}