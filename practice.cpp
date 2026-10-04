#include<bits/stdc++.h>
using namespace std;

// Maximum of all sub array
int twoSum(vector<int>&arr){
    long long secondLarge = LLONG_MIN;
    long long thirdLarge = LLONG_MIN;
    int large = arr[0];

    int i =0;
    while(i<arr.size()){ // TC=O(n)
        if(arr[i]>large){
            thirdLarge = secondLarge;
            secondLarge = large;
            large = arr[i];
        }
        if(arr[i]>secondLarge && arr[i]!=large){
            thirdLarge = secondLarge;
            secondLarge = arr[i];
        }
        if(arr[i]>thirdLarge && arr[i]!=large && arr[i]!=secondLarge){
            thirdLarge = arr[i];
        }
        i++;
    }
    if(thirdLarge == LLONG_MIN) return large;
    else return thirdLarge;
}

int main(){
    vector<int> arr = {1,2,-2147483648};  
    cout<<twoSum(arr);

    // vector<int> res = twoSum(arr, k);

    // for(auto it:res){
    //     cout<<it<<" ";
    // }
   
    return 0;
}

// TC=O(n)
// SC=O(1)