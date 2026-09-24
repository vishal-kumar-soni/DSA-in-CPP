// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the
// range that is missing from the array.

// let suppose arr=[1,0,2,3,5] is given where n =5
// we simply have to find that number which is not present b/w 0-n


#include<bits/stdc++.h>
using namespace std;

int Missing(vector<int>&arr){
    int n = arr.size();

    int total = 0;
    for(int i=0;i<arr.size();i++){
        total+=arr[i];
    }

    int totalSum = n*(n+1)/2;
    return (totalSum-total);
}

int main(){
    vector<int> arr={1,0,2,3,5};
    cout<<Missing(arr);
    
    return 0;
}

// TC=O(n)
// SC=O(1)