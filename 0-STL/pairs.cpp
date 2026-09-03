#include <bits/stdc++.h>
using namespace std;
int main(){
    //  we can assign two or more values in a single variable
    // using pair

    pair<int, int> p={1,2};
    // cout<<p.second;

    pair <int, pair<int,int>> r={12,{10,20}};
    // cout<<r.second.first;
    

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].first;

    return 0;
}