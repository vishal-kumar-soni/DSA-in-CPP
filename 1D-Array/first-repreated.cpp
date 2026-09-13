// Given an array arr[], find the first repeating element. The element should occur more than once
// and the index of its first occurrence should be the smallest.

#include<bits/stdc++.h>
using namespace std;

int firstRepeated(vector<int>&arr){
    unordered_map<int, int> map;

    int res = -1;
    for(int i =0 ;i<arr.size();i++){
        if(map.find(arr[i])!=map.end()){
            if(res == -1 || map[arr[i]]<res){
                res = map[arr[i]];
            }
        }else{
            map.insert({arr[i], i+1});
        }
    }

    return res-1;
}

int main(){
    vector<int> arr = {1,1,3,4,3,5,6};
    cout<<firstRepeated(arr);
    
    return 0;
}