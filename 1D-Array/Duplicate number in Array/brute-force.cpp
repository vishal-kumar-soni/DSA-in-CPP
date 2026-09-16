// Given an array arr of integers, find all the elements that occur more than once in the array.
// If no element repeats, return an empty array.

#include<bits/stdc++.h>
using namespace std;

vector<int> Duplicate(vector<int>&arr){
    vector<int> res; //SC=O(n/2)
    for(int i =0;i<arr.size();i++){//TC=O(n)
        int lastInserted = -1;
        for(int j =i+1;j<arr.size();j++){ //TC=O(n)
            if(arr[i]==arr[j]){
                if(lastInserted != arr[j]){
                    lastInserted = arr[i];
                    res.push_back(arr[i]);
                }
                arr[j] = -1;
            }
        }
    }

    return res;
}

int main(){

    vector <int> arr = {2,3};
    vector<int> res = Duplicate(arr);

    if(res.size() == 0) cout<<"No any duplicate element";

    for(auto it: res){
        cout<<it<<' ';
    }
    return 0;
}

// TC=O(n*n)
// SC=O(n/2)