#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> vec;
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);

    // Three ways to print all the elements

    // auto = vector<int>::iterator i = vec.begin(); --> It stores memory address of 1st element of vec vector
    // Similarly, vector<int>::iterator i = vec.end(); --> It stores memory address of last-1 element of vec

    // 1. using auto iterator
    for (auto i = vec.begin(); i < vec.end(); i++){
        cout << *(i) << " ";
    }

    // 2. using for loop
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    // 3. using foreach loop
    for (auto i : vec){
        cout << i << " ";
    }
    return 0;
}
