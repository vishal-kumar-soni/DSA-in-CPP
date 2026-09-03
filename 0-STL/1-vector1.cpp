#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> vec; // -> Declaration of vector
    vec.push_back(12);
    vec.push_back(13);
    vec.push_back(14);
    // cout<<vec[1];

    vector<int> vect(5, 0); // Initialize vector of lentgh 5, all elements filled with 0
    cout << vect[4];        // vect = { 0, 0, 0, 0, 0}

    vector<int> v1(6, 1);
    vector<int> v2(v1);  // The elements of v1 is copied in v2
    cout << v2[3];
    
    return 0;
}
