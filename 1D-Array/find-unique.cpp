#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int findUnique(vector<int>&arr, int k ){
    unordered_map<int,int> mpp;
    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    }
    for(auto it:mpp){
        if(it.second!=k) return it.first;
    }
}

int main(){
    vector<int> arr={6,2,5,2,2,6,6};
    int k=3;

    int res = findUnique(arr, k);
    cout<<res;
   
    return 0;
}