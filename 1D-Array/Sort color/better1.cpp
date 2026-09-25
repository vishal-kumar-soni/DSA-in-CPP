// Leetcode 75

#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr){
    vector<int> res;
    int zero= 0;
    int one= 0;
    int two= 0;

    for(int i=0;i<arr.size();i++){ //TC=O(n)
        if(arr[i]==0) zero++;
        else if(arr[i]==1) one++;
        else two++;
    }

    for(int i=1;i<=zero;i++){ //TC=O(n) or
        res.push_back(0);
    }
    for(int i=1;i<=one;i++){ //TC=O(n) or
        res.push_back(1);
    }
    for(int i=1;i<=two;i++){ //TC=O(n)
        res.push_back(2);
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

// TC=O(2n)
// SC=O(1)