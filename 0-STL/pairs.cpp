#include <bits/stdc++.h>
using namespace std;
int main(){
    // We can assign two or more values of same or different data types in a single variable 
    // using pair

    pair<int, int> p={1,2};
    // cout<<p.first; -> 1
    // cout<<p.second; -> 2

    pair <int, pair<int,int>> r={12,{10,20}};
    // cout<<r.second.first;
    

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first;

    return 0;
}