// Leetcode 169 

#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&arr){
    int arrLength = arr.size();

    int candidate=arr[0];
    int count = 0;

    // Finding eligible candidate
    for(int i =0;i<arr.size();i++){ //TC=O(n)
        if(count==0){
            candidate= arr[i];
            count++;
        }else if(candidate ==arr[i]){
            count++;
        }else count--;
    }

    // checking this candidate appears more than mid or not
    int candidateCount = 0;
    for(int i =0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]==candidate) candidateCount++;
    }

    if(candidateCount>arrLength/2) return candidate;
    return -1;
}

int main(){
    vector<int> arr = {1,4,4,21,21,21,21};   
    cout<< majority(arr);
   
    return 0;
}

// TC=O(n)
// SC=O(1)  