#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&arr){
    int maxprofit  = 0;
    for(int i =0;i<arr.size();i++){  // TC=O(n)
        for(int j=i;j<arr.size();j++){ // TC=O(n)
           maxprofit = max(maxprofit, arr[j]-arr[i]);
        }
    }
    return maxprofit;
}

int main(){
    vector<int>arr = {7,1,5,3,6,74};
    cout<<maxProfit(arr);

    return 0;
}

// TC=O(n*n)
// SC=O(1)