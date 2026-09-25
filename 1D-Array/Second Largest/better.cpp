#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>&arr){

    int large = arr[0];
    for(int i=0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]>large) large = arr[i];
    }
    
    int secondLarge = INT_MIN;
    for(int i=0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]>secondLarge && arr[i]!=large) secondLarge = arr[i];
    }
   
    return (secondLarge==INT_MIN)?-1:secondLarge;

}

int main(){
    vector<int> arr = {3, 4, 5, 6, 31, 31}; // 6

    cout<<secondLargest(arr);
   
    return 0;
}

// TC=O(2n)
// SC=O(1)