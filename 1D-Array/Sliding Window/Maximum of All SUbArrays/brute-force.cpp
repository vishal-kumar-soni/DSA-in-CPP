#include<bits/stdc++.h>
using namespace std;

// Maximum of all sub array
vector<int> twoSum(vector<int>&arr, int k){
    vector<int> res; //SC=O(n)

    for(int i=0;i<=arr.size()-k;i++){
        int large = arr[i];
        for(int j = i ; j<i+k ; j++){
            if(arr[j]>large){
               large =arr[j];
            }
        }
        res.push_back(large);
    }
   
    return res;
}

int main(){
    vector<int> arr = {120, -1, 17, 8, -16, 20, 23, 1}; //120 17 17 20 23 23  
    int k =3;

    vector<int> res = twoSum(arr, k);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(n*k)
// SC=O(n)