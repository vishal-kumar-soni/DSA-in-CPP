#include<bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>&arr){
    sort(arr.begin(),arr.end()); // TC=O(nlogn)

    int large = arr[arr.size()-1];
    for(int i=arr.size()-1;i>=0;i--){ // TC=O(n)
       if(arr[i]<large) return arr[i];
    }
    return -1;
}

int main(){
    vector<int> arr = {3, 4, 5, 6, 31, 31}; // 6

    cout<<secondLargest(arr);

    return 0;
}

// TC=O(nlogn)
// SC=O(1)