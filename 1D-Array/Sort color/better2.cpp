//Leetcode 75 

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr){
    vector<int> res;

    for(int i=0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]==0){
            res.push_back(0);
        }
    }
    for(int i=0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]==1){
            res.push_back(1);
        }
    }
    for(int i=0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]==2){
            res.push_back(2);
        }
    }

    return res;
    
}

int main(){
    vector<int> arr = {2,0,2,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,0,0,0}; 


    vector<int> res = twoSum(arr);

    for(auto it:res){
        cout<<it<<" ";
    }
   
    return 0;
}

// TC=O(3n)
// SC=O(1)