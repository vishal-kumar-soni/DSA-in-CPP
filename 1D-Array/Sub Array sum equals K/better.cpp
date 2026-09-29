// Given an array of integers nums and an integer k,this function returns the 
// total number of subarrays whose sum equals to k.

// This solution is only applicable for positive elements.

#include<bits/stdc++.h>
using namespace std;

int subarray(vector<int>&arr, int target){
    int  i=0;
    int j=0;
    int sum = 0;
    int count = 0;

    while(j<arr.size()){
        sum+=arr[j];
        
        while(sum>target){
            sum-=arr[i];
            i++;
        }

        if(sum==target){
            count++;
        }
        j++;
    }
    return count;
}

int main(){
    vector<int> arr = {1,2,0,3,2,1,3,1,2};
    int k = 3;

    cout<<subarray(arr, k);
    
    return 0;
}

// TC=O(n)
// SC=O(1)