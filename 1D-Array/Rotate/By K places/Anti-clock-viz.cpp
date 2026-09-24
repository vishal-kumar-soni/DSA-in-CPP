//Leetcode 189

#include<bits/stdc++.h>
using namespace std;

vector<int> Rotate(vector<int>&arr, int k){
    if(k>nums.size()){
        k=k%nums.size();
    }

    reverse(arr.begin(), arr.end()); // TC=O(n)
    reverse(arr.begin(),arr.begin()+k); // TC=O(k)
    reverse(arr.begin()+(k),arr.end()); //TC=O(n)

    return arr;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7}; // [5,6,7,1,2,3,4]
    int k = 3;

    vector<int> res = Rotate(arr, k);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(2n)
// SC=O(1)