// Given an array arr, rotate the array by one position in Anti-clockwise 
// direction.


#include<bits/stdc++.h>
using namespace std;

vector<int> Rotate(vector<int>&arr){
    vector<int> res; //SC=O(n)
    
    for(int i=1;i<arr.size();i++){ //TC=O(n)
        res.push_back(arr[i]);
    }

    res.push_back(arr[0]);
    
    return res;
}

int main(){
    vector<int> arr = {1, 2, 3, 4, 5}; // [ 2, 3, 4, 5, 1 ]

    vector<int> res = Rotate(arr);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(n)
// SC=O(n)