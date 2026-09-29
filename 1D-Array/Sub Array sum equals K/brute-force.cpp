// Given an array of integers nums and an integer k,this function returns the 
// total number of subarrays whose sum equals to k.

#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int>&arr, int k){
    int count = 0;
    for(int i=0;i<arr.size();i++){
        int sum = 0;
        for(int j=i;j<arr.size();j++){
            sum+=arr[j];
            if(sum == k) count++;
        }
    }

    return count;
}

int main(){
    vector<int> arr = {1,2,5,4,2,1,3,5,2};
    int k = 1;

    cout<<subarray(arr, k);
    
    return 0;
}