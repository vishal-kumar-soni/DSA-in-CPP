#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>&arr, int target){
    vector<int> res; //SC=O(1)
    for(int i =0;i<arr.size();i++){ // TC=O(n)
        for(int j=i+1;j<arr.size();j++){ //TC=O(n)
            if(arr[i]+arr[j]==target){
               res.push_back(i);
               res.push_back(j);
               break;
            }
        }
    }
    return res;
}
 
int main(){
    vector<int> arr = {1,2};
    int target = 3;
    
    vector<int> res = twoSum(arr, target);

    for(auto it:res){
        cout<<it<<" ";
    }
    return 0;
}

// TC=O(n*n)
// SC=O(1)