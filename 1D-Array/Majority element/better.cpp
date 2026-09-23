// Leetcode 169 

#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&arr){
    int arrLength = arr.size();

    unordered_map<int, int> map; // SC=O(n/2)
    for(int i =0;i<arr.size();i++){ //Tc=O(n)
        map[arr[i]]++;
    }

    for(auto it:map){ //TC=O(n/2)
        if(it.second>arrLength/2){
            return it.first;
        }
    }

}

int main(){
    vector<int> arr = {1,4,4,21,21,21,21};   
    cout<< majority(arr);
   
    return 0;
}

// TC=O(n)
// SC=O(n/2)