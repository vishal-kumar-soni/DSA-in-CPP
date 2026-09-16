#include<bits/stdc++.h>
using namespace std;

int KadaneAlgo(vector<int>&arr){
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i =0;i<arr.size();i++){ // TC = O(n)
        currSum = currSum + arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum<0) currSum = 0;
    }
   return maxSum;
}

int main(){
    vector<int> arr = {-4, 4, -1, 4, 3};
    cout<<KadaneAlgo(arr);

    return 0;
}

// TC=O(n)
// SC=O(1)