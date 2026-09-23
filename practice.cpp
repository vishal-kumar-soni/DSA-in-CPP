#include<bits/stdc++.h>
using namespace std;

int twoSum(vector<int>&arr){
    int maxSum = INT_MIN;
    int currSum= 0;
    for(int i =0;i<arr.size();i++){
        currSum = currSum+arr[i];
        maxSum= max(maxSum, currSum);
        if(currSum<0){
            currSum= 0;
        }
    }
    return maxSum;
}

int main(){
    vector<int> arr = {-4, 4, -1, 4, 3};
    
   cout<< twoSum(arr);

    
    return 0;
}

// TC=O(n)
// SC=O(n)