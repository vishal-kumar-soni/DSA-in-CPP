#include<bits/stdc++.h>
using namespace std;

int twoSum(vector<int>&arr){
    int count = 0;
    int i=0;
    int i=0;

    while(j<arr.size()){
        if(arr[i]+arr[j]==target){
            count++;
            i++;
        }
        if(arr[i]+arr[j]<target){
            j++;
        }else{
            i--;
        }
    }   
}

int main(){
    vector<int> arr = {1,2,5,4,2,1,3,5,2}; 
    cout<<twoSum(arr);

    // vector<int> res = twoSum(arr);

    // for(auto it:res){
    //     cout<<it<<" ";
    // }
   
    return 0;
}

// TC=O(2n)
// SC=O(1)