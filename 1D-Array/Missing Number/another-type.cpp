// Given an array nums containing n distinct numbers in the range [1, n], return the only number in the
// range that is missing from the array.


#include<bits/stdc++.h>
using namespace std;

int Missing(vector<int>&arr){
    int n = arr.size()+1;

    int total = 0;
    for(int i=0;i<arr.size();i++){
        total+=arr[i];
    }

    int totalSum = n*(n+1)/2;
    return (totalSum-total);
}

int main(){
    vector<int> arr={1,3,4,5};
    cout<<Missing(arr);
    
    return 0;
}

// TC=O(n)
// SC=O(1)