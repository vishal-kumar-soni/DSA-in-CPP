#include<bits/stdc++.h>
using namespace std;

vector<int> Rotate(vector<int>&arr, int k){

    if(k>arr.size()){
        k=k%arr.size();
    }

    reverse(arr.begin(), arr.begin()+k); // TC=O(k)
    reverse(arr.begin()+k,arr.end()); // TC=O(n-k)
    reverse(arr.begin(),arr.end()); //TC=O(n)

    return arr;
}

int main(){
    vector<int> arr = {1,2,3,4,5,6,7}; // [3, 4, 5, 6, 7, 1, 2]

    int k = 2;

    vector<int> res = Rotate(arr, k);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(2n)
// SC=O(1)