// First negative in subArray of D

#include<iostream>
#include<vector>
using namespace std;

vector<int> negative(vector<int>&arr, int k){
   int i=0;
   int j=0;
   
    vector<int> res;
    bool findNeg = false;
    while(j<arr.size()){
        if(arr[j]<0 && findNeg==false){
            res.push_back(arr[j]);
            findNeg = true;
            j++;
        }else if(j==i+k-1){
            findNeg=false;
            i++;
            j=i;
        }else{
            j++;
        }
    }
    return res;
}

int main(){
    vector<int> arr = {12, -1, -7, 8, -16, 30, 23, 3};
    int k=3;
    vector<int> ans = negative(arr, k);

    for(auto it:ans){
        cout<<it<<" ";
    }
    return 0;
}