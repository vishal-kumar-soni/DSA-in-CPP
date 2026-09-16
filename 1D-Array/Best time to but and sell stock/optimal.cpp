#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>&arr){
    int minimum = arr[0];
    int maxProfit = 0;
    for(int i = 1;i<arr.size();i++){
        int cost = arr[i]- minimum;
        maxProfit = max(cost, maxProfit);
        minimum = min(arr[i],minimum) ;
    }

    return maxProfit;
}

int main(){
    vector<int>arr = {7,1,2,10,3};
    cout<<maxProfit(arr);

    return 0;
}

// TC=O(n)
// SC=O(1)