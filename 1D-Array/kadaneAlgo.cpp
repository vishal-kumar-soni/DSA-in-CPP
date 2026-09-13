// Given an integer array arr, find the contiguous subarray (containing
// atleast one number) which has the largest currSum and returns its currSum and
// prints the subarray.

#include<iostream>
#include<vector>
#include<list>
using namespace std;

int maxSum(vector<int>&arr ){
   int maxSum=0;
   int currSum=0;

    for(int i=0;i<arr.size();i++){
        currSum+=arr[i];
        if(currSum<0){
            currSum=0;
        }
        maxSum=max(maxSum,currSum);
    }
    return maxSum;
}

int main(){
    vector<int> arr={-4, 3, -1, -6, 4, 3, -19};   

    int res = maxSum(arr);    //7
    cout<<res;
   
    return 0;
}
