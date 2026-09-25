// Given an array arr, rotate the array by one position in -clockwise direction.

#include<bits/stdc++.h>
using namespace std;

vector<int> Rotate(vector<int>&arr){
    vector<int> res;
    
    res.push_back(arr[arr.size()-1]);
    for(int i=0;i<arr.size()-1;i++){
        res.push_back(arr[i]);
    }

    return res;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5}; // [ 5, 1, 2, 3, 4 ]

    vector<int> res = Rotate(arr);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(2n)
// SC=O(1)