#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<int> qe;

    qe.push(1);
    qe.push(2);
    qe.push(3);
    qe.push(4);
    qe.push(5);
    qe.emplace(6);
    //    -----------------------------------------
    //    |
    //    | 1 , 2 , 3 , 4 , 5 , 6
    //    |
    //    -----------------------------------------

    cout << qe.front() << endl; // 1
    cout << qe.back() << endl; // 6

    // Three generic functions are there in stack
    // push(), pop(), fornt(), back() --> all works on O(1) TC

    // Other functions are
    // size(), empty(), swap()
    //  q1.swap(q2);

    return 0;
}