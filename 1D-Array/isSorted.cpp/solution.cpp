#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>&arr){
    for(int i =1; i<arr.size();i++){
        if(arr[i]<arr[i-1]) return false;
    }

   return true;
}

int main(){
    vector<int> arr = {3, 4, 5, 6, 7};
    cout<<isSorted(arr);

    return 0;
}

// TC=O(n)
// SC=O(1)