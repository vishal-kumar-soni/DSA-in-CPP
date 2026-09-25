#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>&arr){
    int secondLarge = INT_MIN;
    int large = arr[0];

    int i =0;
    while(i<arr.size()){ // TC=O(n)
        if(arr[i]>large){
            secondLarge = large;
            large = arr[i];
        }
        if(arr[i]>secondLarge && arr[i]!=large){
            secondLarge = arr[i];
        }
        i++;
    }

    return (secondLarge==INT_MIN)?-1:secondLarge;
}

int main(){
    vector<int> arr = {3, 4, 5, 6, 31, 31}; // 6

    cout<<secondLargest(arr);

    return 0;
}

// TC=O(n)
// SC=O(1)