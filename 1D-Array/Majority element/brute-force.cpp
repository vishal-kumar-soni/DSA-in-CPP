// Leetcode 169 

//Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that 
// the majority element always exists in the array.

#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>&arr){

    int arrLength = arr.size()/2;
   
    for(int i =0;i<arr.size();i++){ // TC=O(n/2)
        int count = 0;
        for(int j = 0;j<arr.size();j++){ //TC=O(n)
            if(arr[i]==arr[j]) count++;
        }
        if(count>arrLength){
            return arr[i];
        }
    }
}

int main(){
    vector<int> arr = {1,4,4,21,21,21,21};   
    cout<< majority(arr);
   
    return 0;
}

// TC=O(n*n/2)
// SC=O(1)